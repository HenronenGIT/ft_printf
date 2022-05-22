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

void	precision_flag(t_flags *tab, int arg_len)
{

	if (tab->width)
		tab->ret_len += putpadding((tab->width - arg_len - tab->prec_len), ' ');
	else

	tab->ret_len += putpadding((tab->prec_len - arg_len), '0');

}

void	hash_flag()
{
	
}