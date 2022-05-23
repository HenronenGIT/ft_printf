/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:11:37 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/19 22:11:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	plus_flag(t_flags *tab)
{
	if (tab->is_neg)
		tab->ret_len += write(1, "-", 1);
	else if (tab->space)
		tab->ret_len += write(1, " ", 1);
	else
		tab->ret_len += write(1, "+", 1);
	tab->width -= 1;
}

char	*zero_flag(t_flags *tab, char *str, int arg_len)
{
	// if (tab->plus || tab->is_neg)
		// plus_flag(tab, str, arg_len);
	if (tab->zero && !tab->precision)
		tab->ret_len += putpadding((tab->width - arg_len), '0');
	return (str);
}

// void	precision_flag(t_flags *tab, char *str, int arg_len)
void	precision_flag(t_flags *tab, char *str, int arg_len)
{
	int prec_padding;

	prec_padding = 0;
	prec_padding = tab->prec_len - arg_len;
	tab->prec_len -= arg_len;
	// if (tab->plus)
	// {
	// 	if (str[0] == '-')
	// 		write(1, "-", 1);
	// 	// else
	// 	// 	write(1, "+", 1);

	// }
	// if (tab->width)
		// tab->ret_len += putpadding(tab->width - arg_len - tab->prec_len, ' ');

	tab->ret_len += putpadding(prec_padding, '0');
}

void	hash_flag()
{
	
}