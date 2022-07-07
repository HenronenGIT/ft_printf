/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:00:08 by hmaronen          #+#    #+#             */
/*   Updated: 2022/07/06 22:00:09 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	p_handler(t_flags *tab)
{
	unsigned long	argument;
	char			*arg_str;	

	tab->hash = 1;
	tab->ret_len += 2;
	argument = va_arg(tab->args, unsigned long long);
	arg_str = ft_unsigned_itoa_base(argument, 16);
	if (tab->precision && tab->prec_len == 0)
		arg_str = NULL;
	tab->arg_len += ft_strlen(arg_str);
	nb_padding(tab, arg_str, "0x");
}

void	o_handler(t_flags *tab)
{
	char			*arg_str;
	char			*prefix;
	unsigned long	arg;

	prefix = NULL;
	arg = 0;
	arg = va_arg(tab->args, unsigned long);
	unsigned_length_modifiers(tab, &arg);
	arg_str = ft_unsigned_itoa_base(arg, 8);
	if ((tab->hash && !tab->precision)
		|| (tab->hash && tab->prec_len == 0 && arg == 0)
		|| (tab->hash && tab->prec_len <= (int)ft_strlen(arg_str)))
	{
		tab->ret_len += 1;
		prefix = ft_strdup("0");
	}
	if ((tab->precision && tab->prec_len == 0 && *arg_str == '0')
		|| (tab->hash && *arg_str == '0'))
		arg_str = NULL;
	tab->arg_len += ft_strlen(arg_str);
	nb_padding(tab, arg_str, prefix);
}

void	u_handler(t_flags *tab)
{
	unsigned long	arg;
	char			*str;

	arg = 0;
	arg = va_arg(tab->args, unsigned long);
	unsigned_length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	if (tab->precision && tab->prec_len == 0 && arg == 0)
		str = NULL;
	else
		str = ft_unsigned_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str, "");
}

void	percent_handler(t_flags *tab)
{
	tab->precision = 0;
	tab->space = 0;
	tab->arg_len += 1;
	nb_padding(tab, "%", "");
}
