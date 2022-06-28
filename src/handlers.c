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
	// Can be cleaned to match other handlers
	char	*str;
	int		arg_len;

	str = va_arg(tab->args, char*);
	if (!str)
		str = ft_strdup("(null)");
	arg_len = ft_strlen(str);
	tab->ret_len += arg_len;
	if (tab->precision )
	{
		if (arg_len >= tab->prec_len)
			tab->ret_len -= (arg_len - tab->prec_len);
		/* Mayby malloc not needed - any other function */
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
	unsigned long long		arg;
	char					*stringArg;
	char					*prefix;

	prefix = NULL;
	arg = 0;
	arg = va_arg(tab->args, unsigned long long);
	unsigned_length_modifiers(tab, &arg);
	stringArg = ft_unsigned_itoa_base(arg, 16);
	if (tab->precision && tab->prec_len == 0)
		stringArg = NULL;
	tab->arg_len = ft_strlen(stringArg);
	if (tab->hash && stringArg && *stringArg != '0')
	{
		tab->arg_len += 2;
		// Try to remove malloc
		prefix = ft_strdup("0x");
	}
	nb_padding(tab, stringArg, prefix);
}

void	X_handler(t_flags *tab)
{
	unsigned long long		arg;
	char					*stringArg;

	arg = 0;
	arg = va_arg(tab->args, unsigned long long);
	unsigned_length_modifiers(tab, &arg);
	stringArg = ft_strtoupper(ft_unsigned_itoa_base(arg, 16));
	if (tab->precision && tab->prec_len == 0)
		stringArg = NULL;
	tab->arg_len = ft_strlen(stringArg);
	if (tab->hash && stringArg && *stringArg != '0')
		tab->arg_len += 2;
	nb_padding(tab, stringArg, "0X");
}

void	d_handler(t_flags *tab)
{
	char	*str;
	long long arg;

	arg = 0;
	arg = va_arg(tab->args, long long);
	printf("%lld\n", arg);
	length_modifiers(tab, &arg);
<<<<<<< HEAD
	// if (arg < 0 && arg != -9223372036854775808LL) // Not clean way! Any other styles?
=======
>>>>>>> 5a3fc1146f266cd7d0bff1e1ed0c521aa9f11dbc
	if (arg < 0 && arg != LONG_MIN) // Not clean way! Any other styles?
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

void	i_handler(t_flags *tab)
{
	char		*str;
	long long	arg;
	
	// Type long long, or int ?
	arg = va_arg(tab->args, long long);
	length_modifiers(tab, &arg);
	if (arg < 0 && arg != LONG_MIN) // Ugly way, better way to do it? long min handle
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str, "");
}

void	p_handler(t_flags *tab)
{
	unsigned long long	argument;
	char				*argument_str;

	tab->hash = 1;
	argument = va_arg(tab->args, unsigned long long);
	argument_str = ft_unsigned_itoa_base(argument, 16);
	tab->arg_len += ft_strlen(argument_str) + 2;
	nb_padding(tab, argument_str, "0x");
}

void	o_handler(t_flags *tab)
{
	unsigned long long	arg;
	char				*argument_str;

	arg = 0;
	arg = va_arg(tab->args, unsigned long long);
	unsigned_length_modifiers(tab, &arg);
	argument_str = ft_unsigned_itoa_base(arg, 8);
	if (tab->hash)
		tab->arg_len += 1;
	if ((tab->precision && tab->prec_len == 0 && *argument_str == '0')
		|| (tab->hash && *argument_str == '0'))
		argument_str = NULL;
	tab->arg_len += ft_strlen(argument_str);
	nb_padding(tab, argument_str, "0");
}

void	u_handler(t_flags *tab)
{
	unsigned long long	arg;
	char				*str;

	arg = 0;
	arg = va_arg(tab->args, unsigned long long);
	unsigned_length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_unsigned_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str, "");

}

void percent_handler(t_flags *tab)
{
	char	*stringArg;
	long long arg;
	int	prec_padding;


	prec_padding = 0;
	arg = 0;
	tab->arg_len += 1;
	tab->ret_len += tab->arg_len;
	if ((tab->space || tab->width) && !tab->zero && !tab->minus)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	ft_putchar('%');
	if (tab->minus && prec_padding >= 0)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding), ' ');
}