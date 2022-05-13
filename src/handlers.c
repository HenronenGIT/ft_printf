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
	ft_putchar(va_arg(tab->args, int));
}

void	s_handler(t_flags *tab)
{
	ft_putstr(va_arg(tab->args, char*));
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
	/* 1 */
	//ft_putstr(ft_itoa_base(va_arg(tab->args, int), 16));

	/* 2 */
	//void *void_ptr;
	//void_ptr = va_arg(tab->args, void *);
	//ft_putstr(ft_itoa_base(void_ptr, 16));

	/* 3 */
	//void *void_ptr;
	//void_ptr = va_arg(tab->args, void *);
	//(uintptr_t)void_ptr;
	//ft_putstr(ft_itoa_base(void_ptr, 16));
}
