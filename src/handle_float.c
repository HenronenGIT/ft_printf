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

static char	*add_decimals(t_flags *tab, long double argument, char *arg_str)
{
	char	*decimals;
	int		index;

	decimals = NULL;
	index = 0;
	decimals = ft_strnew(tab->prec_len + 1);
	decimals[index++] = '.';
	while (index <= tab->prec_len)
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
	arg_str = ft_strjoin(arg_str, decimals);
	return (arg_str);
}

long double	rounding(long double original, t_flags *tab)
{
	long double	decider;
	long double	rounder;
	int			counter;

	decider = original;
	counter = 0;
	rounder = 0.5;
	while (++counter <= tab->prec_len)
		rounder /= 10;
	counter = 0;
	while (counter <= tab->prec_len)
	{
		decider -= (int)decider;
		decider *= 10;
		counter++;
	}
	if ((int)decider >= 5)
		return (original + rounder);
	else
		return (original);
}

double	bankers_rounding(double decimals)
{
	double	rounder;
	int		roundable;
	int		original;
	int		max_prec;

	max_prec = 16;
	original = decimals;
	roundable = (int)decimals;
	decimals -= (int)decimals;
	rounder = (decimals - (int)decimals) * 10;
	while (max_prec--)
	{
		rounder = rounder - (int)rounder;
		rounder *= 10;
		if (rounder != 0)
			break ;
	}
	if ((!ft_isodd(roundable)) || original == 0)
		return ((int)original);
	else
		return ((int)original + 1);
}

void	f_handler(t_flags *flag)
{
	long double	arg;
	char		*arg_str;

	arg = 0;
	arg_str = NULL;
	flag->is_float = 1;
	if (!flag->precision)
		flag->prec_len = 6;
	arg = double_length_modifiers(flag);
	if (1 / arg < 0)
	{
		arg *= -1;
		flag->is_neg = 1;
	}
	if (flag->prec_len == 0 && arg && ((arg - (int)arg) * 10) == 5)
		arg = bankers_rounding(arg);
	else
		arg = rounding(arg, flag);
	arg_str = ft_itoa_base(arg, 10);
	if (flag->prec_len != 0 || flag->hash)
		arg_str = add_decimals(flag, (arg - (long)arg), arg_str);
	flag->arg_len = ft_strlen(arg_str);
	nb_padding(flag, arg_str, "");
}
