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

static void edit_flags(t_flags *tab)
{
	if (tab->space && tab->plus)
		tab->space = 0;
}

void	check_length_modifiers(t_flags *tab, const char *str, char specifier)
{
	int i;

	i = -1;
	while (str[++i] != specifier)
	{
		if (str[i] == 'h' && tab->h)
		{
			tab->h = 0;
			tab->hh = 1;
		}
		if (str[i] == 'h' && !tab->hh)
			tab->h = 1;
		if (str[i] == 'l' && tab->l)
		{
			tab->l = 0;
			tab->ll = 1;
		}
		if (str[i] == 'l' && !tab->ll)
			tab->l = 1;
	}
}

void	check_flags(t_flags *tab, const char *str, char specifier)
{
	int i;

	i = -1;
	while (str[++i] != specifier)
	{
		if (str[i] == '#')
			tab->hash = 1;
		if (str[i] == '0' && !tab->width && !tab->minus)
			tab->zero = 1;
		if (str[i] == '-')
			tab->minus = 1;
		if (str[i] == '+')
			tab->plus = 1;
		if (str[i] == '.')
			tab->precision = 1;
		if (str[i] == ' ')
			tab->space = 1;
		if (ft_isdigit(str[i]) && !tab->precision)
			tab->width = ((10 * tab->width) + str[i] - 48);
 		else if (ft_isdigit(str[i]))
			tab->prec_len = ((10 * tab->prec_len) + str[i] - 48);
	}
	edit_flags(tab);
}
