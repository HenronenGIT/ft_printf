/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:57:51 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/10 16:57:53 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_handler(t_flags *tab)
{
	char ch;

	ch = va_arg(tab->args, int);
	if (tab->width && !tab->minus)
		putpadding((tab->width - 1), ' ');
	ft_putchar(ch);
	if (tab->width && tab->minus)
		putpadding((tab->width - 1), ' ');
}

void	s_handler(t_flags *tab)
{
	char *str;
	str = va_arg(tab->args, char*);

	if (tab->width)
	{
		putpadding(tab->width, ' ');
	}
	ft_putstr(str);
	//ft_putstr(va_arg(tab->args, char*));
}

void	x_handler(t_flags *tab)
{
	ft_putstr(ft_itoa_base(va_arg(tab->args, int), 16));
}

void	d_handler(t_flags *tab)
{
	ft_putstr(ft_itoa(va_arg(tab->args, int)));
}

void	i_handler(t_flags *tab)
{
	ft_putstr(ft_itoa(va_arg(tab->args, int)));
}

void	p_handler(t_flags *tab)
{
	ft_putstr("0x");
	put_ptr(va_arg(tab->args, unsigned long long));
}

void	o_handler(t_flags *tab)
{
	ft_putstr(ft_itoa_base(va_arg(tab->args, int), 8));
}
