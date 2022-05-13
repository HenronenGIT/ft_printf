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

t_flags    *count_format_width(const char *str, t_flags *tab)
{
	printf("in count width:%s\n", str);
	return (tab);
}

char	check_flags(t_flags *tab, const char *str)
{
	while (*str != 'c' && *str != 's' && *str != 'p' && *str != 'x' && *str != 'd'
			&& *str != 'i')
	{
		if (*str == '0')
			tab->zero = 1;
		
		str++;
	}
	return (*str);
}

/* Check which flags exists */
t_flags	*check_format(const char *str, t_flags *tab)
{
	int i;
	char conversion;

	i = 0;
	/* Fill jump table func. */
	handler_func	*conv_arr[5] = {
		c_handler,
		s_handler,
		p_handler,
		x_handler,
		i_handler
	};

	conversion = check_flags(tab, str);
	/* JUMP TABLE */
	while (FORMATS[i])
	{
		if (FORMATS[i] == conversion)
			conv_arr[i](tab);
		i++;
	}
	return (tab);
}

t_flags *init_tab(t_flags *tab)
{
	tab->zero = 0;
	tab->hash = 0;
	tab->width = 0;

	return (tab);
}

int ft_printf(const char *format, ...)
{
	const char *ptr;
	t_flags *tab;
	//va_list args;
	//va_start (args, format);

	tab = (t_flags *)malloc(sizeof(t_flags));
	if (!tab)
		return (-1);
	init_tab(tab);
	va_start(tab->args, format);
	ptr = format;
	while (*ptr != '\0')
	{
		if (*ptr != '%')
		{
			ft_putchar(*ptr);
			ptr++;
			continue;
		}
		else
		{
			ptr++;
			check_format(ptr, tab);
		}
		ptr++;
	}
	return (0);
}
