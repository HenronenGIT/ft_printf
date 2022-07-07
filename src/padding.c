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

int	count_padding(t_flags *tab, char *prefix, int prec_len)
{
	int	padding_len;
	int	prefix_len;

	padding_len = 0;
	prefix_len = ft_strlen(prefix);
	padding_len = tab->width - tab->arg_len - prec_len;
	if (tab->hash)
		padding_len -= prefix_len;
	if (tab->is_neg || tab->plus || tab->space)
		padding_len -= 1;
	if (padding_len < 0)
		padding_len = 0;
	return (padding_len);
}

int	count_precision(t_flags *flag)
{
	int	prec_padding;

	prec_padding = 0;
	prec_padding = flag->prec_len - flag->arg_len;
	if (prec_padding < 0)
		prec_padding = 0;
	return (prec_padding);
}

/* If statements in order:
	Width
	'.' && '0'
	Sign
	'0' && '.' FOR precision
	' ' && '0'
	#
	'.'
	'0'
	'-'
*/
void	nb_padding(t_flags *tab, char *argument, char *prefix)
{
	int	padding_len;
	int	prec_len;

	tab->ret_len += tab->arg_len;
	prec_len = count_precision(tab);
	padding_len = count_padding(tab, prefix, prec_len);
	if ((tab->space || tab->width) && !tab->zero && !tab->minus)
		tab->ret_len += put_padding(padding_len, ' ');
	if (tab->zero && tab->precision && padding_len >= 0 && !tab->is_float)
		tab->ret_len += put_padding(padding_len, ' ');
	if (tab->plus || tab->is_neg || tab->space)
		put_sign(tab);
	if (tab->zero && tab->precision && tab->is_float)
		tab->ret_len += put_padding(padding_len, '0');
	if (tab->space && tab->zero && !tab->precision)
		tab->ret_len += put_padding(padding_len, '0');
	if (tab->hash)
		ft_putstr(prefix);
	if (tab->precision && padding_len >= 0)
		tab->ret_len += put_padding(prec_len, '0');
	if (tab->zero && !tab->precision && !tab->space)
		tab->ret_len += put_padding((padding_len), '0');
	ft_putstr(argument);
	if (tab->minus && padding_len >= 0)
		tab->ret_len += put_padding(padding_len, ' ');
}
