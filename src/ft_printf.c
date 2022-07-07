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

static int	is_format(char ch)
{
	if (ch == 'c' || ch == 's' || ch == 'p' || ch == 'x' || ch == 'X'
		|| ch == 'd' || ch == 'i' || ch == 'u' || ch == 'o' || ch == '%'
		|| ch == 'f')
		return (1);
	return (0);
}

static void	init_tab(t_flags *tab)
{
	tab->width = 0;
	tab->space = 0;
	tab->zero = 0;
	tab->plus = 0;
	tab->minus = 0;
	tab->hash = 0;
	tab->precision = 0;
	tab->prec_len = 0;
	tab->arg_len = 0;
	tab->is_neg = 0;
	tab->hh = 0;
	tab->h = 0;
	tab->l = 0;
	tab->ll = 0;
	tab->is_float = 0;
}

static void	jump_table(t_flags *tab, int index)
{
	static t_handler_func	*jump_table[11] = {
		c_handler,
		s_handler,
		p_handler,
		di_handler,
		di_handler,
		o_handler,
		u_handler,
		x_handler,
		big_x_handler,
		f_handler,
		percent_handler
	};

	jump_table[index](tab);
}

const char	*check_format(const char *str, t_flags *tab)
{
	const char	*ptr;
	char		*specifier_ptr;

	ptr = str;
	while (*str != '\0' && !is_format(*str))
		str++;
	if (*str == '\0')
	{
		tab->ret_len += write(1, &(*ptr), 1);
		return (ptr);
	}
	check_flags(tab, ptr, *str);
	check_length_modifiers(tab, ptr, *str);
	specifier_ptr = ft_strchr(FORMATS, *str);
	if (specifier_ptr)
		jump_table(tab, (int)(specifier_ptr - FORMATS));
	return (str);
}

int	ft_printf(const char *format, ...)
{
	t_flags		*tab;

	tab = (t_flags *)malloc(sizeof(t_flags));
	if (!tab)
		return (-1);
	va_start(tab->args, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			ft_putchar(*format);
			tab->ret_len += 1;
		}
		else
		{
			format++;
			init_tab(tab);
			format = check_format(format, tab);
		}
		format++;
	}
	va_end(tab->args);
	return (tab->ret_len);
}
