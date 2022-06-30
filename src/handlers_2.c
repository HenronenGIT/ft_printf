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

char	bankers_rounding(double decimal, t_flags *tab)
{
	int	number;
	int	rounder;
	int i;

	rounder = 0;
	number = 0;
	if (tab->precision && tab->prec_len == 0)

	number = decimal * 10;
	decimal *= 10;
	rounder = decimal * 10;
	if (rounder == 5 && (number % 2 != 0))
			i = 0;
	else if (rounder > 5)
		number += 1;

	return (number + 48);
}

static char	*handle_float(t_flags *tab, char *arg_str, double argument)
{
	char	*decimals;
	int		index;

	index = 0;
	decimals = NULL;
	if (tab->prec_len > 0)
	{
		decimals = ft_strnew(tab->prec_len);
		decimals[index++] = '.';
		while(index < tab->prec_len)
		{
			argument *= 10;
			if ((int)argument == 0)
				decimals[index] = '0';
			else
			{
				decimals[index] = (int)argument + 48;
				argument -= (int)argument;
			}
			index += 1;
		}
	}
	decimals[index] = bankers_rounding(argument, tab);
	arg_str = ft_strjoin(arg_str, decimals);
	return (arg_str);
}

void	f_handler(t_flags *tab)
{
	char	*arg_str;
	double	arg;

	arg = 0;
	arg_str = NULL;
	if (!tab->precision)
		tab->prec_len = 6;
	// arg = va_arg(tab->args, long double);
	arg = va_arg(tab->args, double);
	// length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	arg_str = ft_itoa_base(arg, 10);
	arg -= (int)arg;
	arg_str = handle_float(tab, arg_str, arg); // "add_decimals"
	tab->arg_len = ft_strlen(arg_str);
	nb_padding(tab, arg_str, "");
}
