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
	decimals = ft_strnew(tab->prec_len);
	decimals[index++] = '.';
	while(index <= tab->prec_len)
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
	// decimals[index] = bankers_rounding(argument, tab);
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

	if (rounder == 5 && !ft_isodd(roundable))
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
	if (arg < 0 || arg == -0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}

	if (tab->prec_len == 0 && arg)
		arg = bankers_rounding(arg, tab);
	else
		arg = rounding(arg, tab);
	arg_str = ft_itoa_base(arg, 10);
	if (tab->prec_len != 0)
		arg_str = add_decimals(tab, (arg - (long)arg), arg_str);
	tab->arg_len = ft_strlen(arg_str);
	// float_padding(tab, arg_str);
	nb_padding(tab, arg_str, "");
}

/* BEFORE REMAKE VERSION */
// void	f_handler(t_flags *tab)
// {
// 	char	*arg_str;
// 	double	arg;

// 	arg = 0;
// 	arg_str = NULL;
// 	if (!tab->precision)
// 		tab->prec_len = 6;
// 	// arg = va_arg(tab->args, long double);
// 	arg = va_arg(tab->args, double);
// 	// length_modifiers(tab, &arg);
// 	if (arg < 0)
// 	{
// 		arg *= -1;
// 		tab->is_neg = 1;
// 	}
	
// 	arg_str = ft_itoa_base(arg, 10);
// 	if (tab->precision && tab->prec_len == 0) // For .0 precision
// 	{
// 		*arg_str = bankers_rounding(arg, tab);
// 	}
// 	else
// 	{
// 		arg -= (int)arg;
// 		arg_str = add_decimals(tab, arg_str, arg); // "add_decimals"		
// 	}
// 	tab->arg_len = ft_strlen(arg_str);
// 	nb_padding(tab, arg_str, "");
// }


/* Bankers rounding before remake */
// char	bankers_rounding(double decimal, t_flags *tab)
// {
// 	int	number;
// 	int	rounder;

// 	rounder = 0;
// 	number = 0;
// 	if (tab->precision && tab->prec_len == 0)
// 		number = (int)decimal;
// 	else
// 	{
// 		number = decimal * 10;
// 		decimal *= 10;
// 	}
// 	decimal -= number;
// 	rounder = decimal * 10;
// 	if (rounder == 5 && (number % 2 != 0))
// 		number += 1;
// 	else if (rounder > 5)
// 	{
// 		if (number < 9)
// 			number += 1;
// 		else
// 			number = 0;
// 	}
// 	return (number + 48);
// }

/* Add decimals  before remake */
// static char	*add_decimals(t_flags *tab, double decimals, char *arg_str)
// {
// 	char	*decimals;
// 	int		index;

// 	index = 0;
// 	decimals = NULL;
// 	decimals = ft_strnew(tab->prec_len);
// 	decimals[index++] = '.';
// 	while(index < tab->prec_len)
// 	{
// 		argument *= 10;
// 		if ((int)argument == 0)
// 			decimals[index] = '0';
// 		else
// 		{
// 			decimals[index] = (int)argument + 48;
// 			argument -= (int)argument;
// 		}
// 		index += 1;
// 	}
// 	decimals[index] = bankers_rounding(argument, tab);
// 	arg_str = ft_strjoin(arg_str, decimals);
// 	return (arg_str);
// }