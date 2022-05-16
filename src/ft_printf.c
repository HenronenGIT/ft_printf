/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:49:18 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/09 10:49:19 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	count_width(t_flags *tab, int pos, const char *str)
{
	printf("%s\n", str);
}

int		is_format(char ch)
{
	if (ch == 'c' || ch == 's' || ch == 'p' || ch == 'x' || ch == 'd' || ch == 'i')
		return (1);
	return (0);
}

//int	is_flag(char ch)
//{
//	if (ch == '0' || )
//}

//void	check_flags(t_flags *tab, const char *str)
	/* mayby not need to return anything */
char	check_flags(t_flags *tab, const char *str, char format)
{
	int i;

	i = 0;
	//printf("check_flags string:%s\n", str);
	while (str[i] != format)
	{
		if (str[i] == '-')
			tab->minus = 1;
		if (ft_isdigit(str[i]))
		{
			tab->width = (10 * tab->width) + str[i] - 48;
		}
		i++;
	}
	//printf("tab->width:%d\n", tab->width);
	return (*str);
}


t_flags *init_tab(t_flags *tab)
{
	/* mayby not need to return anything */
	tab->width = 0;
	tab->zero = 0;
	tab->plus = 0;
	tab->minus = 0;
	tab->hash = 0;
	return (tab);
}

/* Check which flags exists */
const char	*check_format(const char *str, t_flags *tab)
{
	int i;
	char conversion;
	char format;
	const char *ptr;

	/* Fill jump table func. */
	handler_func	*conv_arr[7] = {
		c_handler,
		s_handler,
		p_handler,
		x_handler,
		d_handler,
		i_handler,
		o_handler
	};
	ptr = str;
	i = 0;
	while (!is_format(*str))
		str++;
	format = *str;

	check_flags(tab, ptr, format);
	/* JUMP TABLE */
	while (FORMATS[i])
	{
		if (FORMATS[i] == format)
		{
			conv_arr[i](tab);
			break;
		}
		i++;
	}
	return (str);
}

int ft_printf(const char *format, ...)
{
	const char	*ptr;
	t_flags		*tab;
	int			i;

	i = 0;
	tab = (t_flags *)malloc(sizeof(t_flags));
	if (!tab)
		return (-1);
	ptr = format;
	va_start(tab->args, format); // Could cause issues, when multiple %.
	// Finding % loop
	while (*ptr != '\0')
	{
		if (*ptr != '%')
			ft_putchar(*ptr); // Could done better, count len and THEN print all in once
		else // When % founded
		{
			ptr++;
			//va_start(tab->args, format); // Could cause issues, when multiple %.
			init_tab(tab);
				/* If sending address of pointer mayby does neeed to
				make new variable in check_format func */
			ptr = check_format(ptr, tab);
		}
		ptr++;
	}
	return (0);
}
