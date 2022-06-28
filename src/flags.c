/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 21:35:34 by hmaronen          #+#    #+#             */
/*   Updated: 2022/06/28 21:35:37 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	check_length_modifiers(t_flags *tab, const char *str, char specifier)
{
	while (*str != specifier)
	{
		if (*str == 'h' && tab->h)
		{
			tab->h = 0;
			tab->hh = 1;
		}
		if (*str == 'h' && !tab->hh)
			tab->h = 1;
		if (*str == 'l' && tab->l)
		{
			tab->l = 0;
			tab->ll = 1;
		}
		if (*str == 'l' && !tab->ll)
			tab->l = 1;
		str++;
	}
}

void	check_flags(t_flags *tab, const char *str, char specifier)
{
	while (*str != specifier)
	{
		if (*str == '#')
			tab->hash = 1;
		if (*str == '0' && !tab->width && !tab->minus)
			tab->zero = 1;
		if (*str == '-')
			tab->minus = 1;
		if (*str == '+')
			tab->plus = 1;
		if (*str == '.')
			tab->precision = 1;
		if (*str == ' ')
			tab->space = 1;
		if (ft_isdigit(*str) && !tab->precision)
			tab->width = ((10 * tab->width) + *str - 48);
		else if (ft_isdigit(*str))
			tab->prec_len = ((10 * tab->prec_len) + *str - 48);
		str++;
	}
	if (tab->space && tab->plus)
		tab->space = 0;
}
