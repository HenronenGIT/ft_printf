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

void	nb_padding(t_flags *tab, char *argument, char *prefix)
{
	int	prec_padding;

	prec_padding = 0;
	tab->ret_len += tab->arg_len;
	if (tab->prec_len)
	{
		prec_padding = tab->prec_len - tab->arg_len;
		if (prec_padding < 0) // Better style ? Just need to neg variable to zero IF negative. Sub function could be added "is_neg"
			prec_padding = 0;
	}
	/* Width padding */
	if ((tab->space || tab->width) && !tab->zero && !tab->minus)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	/* Precision and Zero flag on */
	//if (tab->zero && tab->precision)
	if (tab->zero && tab->precision && prec_padding >= 0)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	/* Sign */
	if (tab->plus || tab->is_neg || tab->space)
		plus_flag(tab);
	/* Space and Zero flag */
	if (tab->space && tab->zero && !tab->precision)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding), '0');
	/* Precision */
	if (tab->precision && prec_padding >= 0)
		tab->ret_len += putpadding(prec_padding, '0');
	/* Zero padding */
	if (tab->hash)
		ft_putstr(prefix);
	if (tab->zero && !tab->precision && !tab->space)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding), '0');
	/* Print argument */
	ft_putstr(argument);
	/* float precision */
	// if (tab->f)
		// handle_float(tab);
	/* With padding right side */
	if (tab->minus && prec_padding >= 0)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding), ' ');
}