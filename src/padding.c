/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   padding.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 22:11:37 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/19 22:11:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_sign(t_flags *tab)
{
	if (tab->is_neg)
		tab->ret_len += write(1, "-", 1);
	else if (tab->space)
		tab->ret_len += write(1, " ", 1);
	else
		tab->ret_len += write(1, "+", 1);
	tab->width -= 1;
}

int	count_padding(t_flags *tab)
{
	int	padding_len;

	padding_len = 0;
	//if (tab->precision && tab->hash) // breaks octal
	//	padding_len = tab->prec_len - tab->arg_len + 2;
	//else
		padding_len = tab->prec_len - tab->arg_len;
	if (padding_len < 0) 
		padding_len = 0;
	return (padding_len);
}

void	nb_padding(t_flags *tab, char *argument, char *prefix)
{
	int	padding_len;

	tab->ret_len += tab->arg_len;
	padding_len = 0;
	if (tab->prec_len)
		padding_len = count_padding(tab);
	/* Width padding */
	if ((tab->space || tab->width) && !tab->zero && !tab->minus)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len - (tab->is_neg || tab->plus || tab->space)), ' ');
	/* Precision and Zero flag on */
	if (tab->zero && tab->precision && padding_len >= 0 && !tab->is_float)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len - (tab->is_neg || tab->plus || tab->space)), ' ');
	/* Sign */
	if (tab->plus || tab->is_neg || tab->space)
		put_sign(tab);
	if (tab->zero && tab->precision && tab->is_float)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len), '0');
	/* Space and Zero flag */
	if (tab->space && tab->zero && !tab->precision)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len), '0');
	if (tab->hash)
		ft_putstr(prefix);
	/* Precision */
	if (tab->precision && padding_len >= 0)
		tab->ret_len += putpadding(padding_len, '0');
	/* Zero padding */
	if (tab->zero && !tab->precision && !tab->space)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len), '0');
	/* Print argument */
	ft_putstr(argument);
	/* With padding right side */
	if (tab->minus && padding_len >= 0)
		tab->ret_len += putpadding((tab->width - tab->arg_len - padding_len), ' ');
}