/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:57:51 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/10 16:57:53 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_handler(t_flags *tab)
{
	char	ch;

	ch = va_arg(tab->args, int);
	tab->ret_len += 1;
	if (tab->width && !tab->minus)
		tab->ret_len += putpadding((tab->width - 1), ' ');
	ft_putchar(ch);
	if (tab->width && tab->minus)
		tab->ret_len += putpadding((tab->width - 1), ' ');
}

void	s_handler(t_flags *tab)
{
	char	*str;
	int		arg_len;

	str = va_arg(tab->args, char *);
	if (!str)
		str = ft_strdup("(null)");
	arg_len = ft_strlen(str);
	tab->ret_len += arg_len;
	if (tab->precision)
	{
		if (arg_len >= tab->prec_len)
			tab->ret_len -= (arg_len - tab->prec_len);
		str = ft_strsub(str, 0, tab->prec_len);
	}
	if (tab->width && !tab->minus)
		tab->ret_len += putpadding((tab->width - ft_strlen(str)), ' ');
	ft_putstr(str);
	if (tab->width && tab->minus)
		tab->ret_len += putpadding((tab->width - ft_strlen(str)), ' ');
}

/* x and X handler could be merged to same function */
void	x_handler(t_flags *tab)
{
	unsigned long	arg;
	char			*arg_str;
	char			*prefix;

	prefix = NULL;
	arg = 0;
	arg = va_arg(tab->args, unsigned long);
	unsigned_length_modifiers(tab, &arg);
	arg_str = ft_unsigned_itoa_base(arg, 16);
	if (tab->precision && tab->prec_len == 0)
		arg_str = NULL;
	tab->arg_len = ft_strlen(arg_str);
	if (tab->hash && arg_str && *arg_str != '0')
	{
		tab->ret_len += 2;
		prefix = ft_strdup("0x");
	}
	nb_padding(tab, arg_str, prefix);
}

void	big_x_handler(t_flags *tab)
{
	unsigned long	arg;
	char			*arg_str;
	char			*prefix;

	prefix = NULL;
	arg = 0;
	arg = va_arg(tab->args, unsigned long);
	unsigned_length_modifiers(tab, &arg);
	arg_str = ft_strtoupper(ft_unsigned_itoa_base(arg, 16));
	if (tab->precision && tab->prec_len == 0)
		arg_str = NULL;
	tab->arg_len = ft_strlen(arg_str);
	if (tab->hash && arg_str && *arg_str != '0')
	{
		tab->ret_len += 2;
		prefix = ft_strdup("0X");
	}
	nb_padding(tab, arg_str, prefix);
}

void	di_handler(t_flags *tab)
{
	char	*str;
	long	arg;

	arg = 0;
	arg = va_arg(tab->args, long);
	length_modifiers(tab, &arg);
	if (arg < 0 && arg != LONG_MIN)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_itoa_base(arg, 10);
	if (tab->precision && tab->prec_len == 0 && *str == '0')
		str = NULL;
	else
		tab->arg_len = ft_strlen(str);
	nb_padding(tab, str, "");
}
