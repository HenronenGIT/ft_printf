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

static char	*add_decimals(t_flags *tab, double argument, char *arg_str)
{
	char	*decimals;
	int		index;

	index = 0;
	decimals = NULL;
	decimals = ft_strnew(tab->prec_len + 1);
	decimals[index++] = '.';

	while(index <= tab->prec_len)
	{
		// if (index != 15)
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
	arg_str = ft_strjoin(arg_str, decimals);
	return (arg_str);
}

// char	bankers_rounding(double decimal, t_flags *tab)
double	rounding(double number, t_flags *tab)
{
	int		counter;
	double	original;
	double	rounder;

	original = number;
	counter = 0;
	rounder = 0.5;
	while (++counter <= tab->prec_len)
		rounder /= 10;
	counter = -1;
	while(++counter <= tab->prec_len)
	{
		number -= (long)number;
		number *= 10;
	}
	// number *= 10;
	if ((int)number >= 5)
		return (original + rounder);
	else
		return (original);
}

double	bankers_rounding(double arg, t_flags *tab)
{
	int	rounder;
	int	roundable;
	int	original;

	original = arg;
	roundable = (int)arg;
	arg -= (int)arg;
	rounder = arg * 10;

	if ((rounder == 5 && !ft_isodd(roundable)) || original == 0)
		return ((int)original);
	else
		return ((int)original + 1);
}

void	f_handler(t_flags *tab)
{
	char	*arg_str;
	// long double	arg;
	double	arg;

	arg = 0;
	arg_str = NULL;
	tab->is_float = 1;
	if (!tab->precision)
		tab->prec_len = 6;
	// arg = va_arg(tab->args, long double);
	arg = va_arg(tab->args, double);
	// length_modifiers(tab, &arg);
	if (1 / arg < 0) // How to check for -0
	{
		arg *= -1;
		if (tab->prec_len != 15 && !tab->l)
			tab->is_neg = 1;
	}

	if (tab->prec_len == 0 && arg)
		arg = bankers_rounding(arg, tab);
	else
		arg = rounding(arg, tab);
	arg_str = ft_itoa_base(arg, 10);
	if (tab->prec_len != 0 || tab->hash)
		arg_str = add_decimals(tab, (arg - (long)arg), arg_str);
	tab->arg_len = ft_strlen(arg_str);
	// float_padding(tab, arg_str);
	nb_padding(tab, arg_str, "");
}
