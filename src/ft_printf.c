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

/* Check which flags exists */
t_flags    *check_format(const char *str, t_flags *tab)
{
	/* Fill jump table func. */
	//handler_func    *arr[4];
	//arr[0] = c_handler;
	//arr[1] = s_handler;
	//arr[2] = p_handler;
	//arr[3] = x_handler;

	// Could make function is_conversion to make cleaner.
	while (*str != 'c' && *str != 's' && *str != 'p' && *str != 'x' && *str != 'd')
	{
		if (*str == '0')
		{
			tab->zero = 1;
			break;
		}
		str++;
	}
	/* JUMP TABLE */
	if (*str == 'c')
		c_handler(tab);
	else if (*str == 's')
		s_handler(tab);
	else if (*str == 'p')
		p_handler(tab);
	else if (*str == 'x')
		x_handler(tab);
	//qelse if (*str == 'X')
	//	x_handler(tab);
	else if (*str == 'd')
		d_handler(tab);

	//else /* If after % is flag */
	//    {
	//        check_flag(&ptr, tab);
	//    }
	//printf("str:%c\n", *str);
	//str++;
	//count_format_width(str, tab);
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
	//    //dispatch_tabe(*++ptr);
		ptr++;
	}
	return (0);
}
