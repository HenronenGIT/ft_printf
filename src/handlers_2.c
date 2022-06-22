/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 09:41:12 by hmaronen          #+#    #+#             */
/*   Updated: 2022/06/22 09:41:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	f_handler(t_flags *tab)
{
	char	*arg_str;
	double	arg;
	// long long arg;

	arg_str = NULL;
	arg = 0;
	arg = va_arg(tab->args, double);
	// length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	arg_str = ft_itoa_base(arg, 10);

	arg *= 10;
	// if (tab->precision && tab->prec_len == 0 && *arg_str == '0')
		// arg_str = NULL;
	// else
		tab->arg_len = ft_strlen(arg_str);
	nb_padding(tab, arg_str, "");
}
