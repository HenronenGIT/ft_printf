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

char	*zero_flag(t_flags *tab, char *str, int arg_len)
{
	if (str[0] == '-')
	{
		write(1, "-", 1);
		str++;
	}
	tab->ret_len += putpadding((tab->width - arg_len), '0');
	return (str);
}

void	precision_flag(t_flags *tab, int arg_len)
{
	int prec_padding;

	prec_padding = 0;
	prec_padding = tab->prec_len - arg_len;
	tab->prec_len -= arg_len;
	// if (tab->width)
		// tab->ret_len += putpadding(tab->width - arg_len - tab->prec_len, ' ');
		
	tab->ret_len += putpadding(prec_padding, '0');
}

void	hash_flag()
{
	
}