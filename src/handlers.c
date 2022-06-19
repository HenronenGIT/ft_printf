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
	char ch;

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

	str = va_arg(tab->args, char*);

	arg_len = ft_strlen(str);
	tab->ret_len += arg_len;
	if (tab->precision)
	{	tab->ret_len -= (arg_len - tab->prec_len);
		/* Mayby malloc not needed - any other function */
		str = ft_strsub(str, 0, tab->prec_len);
	}
	if (tab->width && !tab->minus)
	{
		tab->ret_len += putpadding((tab->width - ft_strlen(str)), ' ');
	}
	ft_putstr(str);
	if (tab->width && tab->minus)
	{
		tab->ret_len += putpadding((tab->width - ft_strlen(str)), ' ');
	}
}

/* x and X handler could be merged to same function */
void	x_handler(t_flags *tab)
{
	char	*str;
	int		str_len;

	str = ft_itoa_base(va_arg(tab->args, int), 16);
	/* Could be made to function, lot of same code in every function */
	/* "count_padding_len" */
	str_len = ft_strlen(str);
	tab->width -= str_len;
	/*
	if (tab->hash)
	{
		ft_putstr("0x");
		tab->width -= 2;
	}
	*/
	if (tab->zero && !tab->minus)
		putpadding(tab->width, '0');
	ft_putstr(str);
	if (tab->minus)
		putpadding(tab->width, ' ');
}

void	X_handler(t_flags *tab)
{
	char	*str;
	int		str_len;
	int i;

	i = 0;
	str = ft_itoa_base(va_arg(tab->args, int), 16);
	str_len = ft_strlen(str);
	tab->width -= str_len;
	if (tab->hash)
	{
		ft_putstr("0X");
		tab->width -= 2;
	}
	if (tab->zero)
		putpadding(tab->width, '0');
	while (str[i])
		ft_putchar(ft_toupper(str[i++]));
}

void	d_handler(t_flags *tab)
{
	char	*str;
	long long arg;

	arg = 0; // Mayby not needed
	arg = va_arg(tab->args, long long);
	length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str);
}

void	i_handler(t_flags *tab)
{
	char		*str;
	long long	arg;
	
	// Type long long, or int ?
	arg = va_arg(tab->args, long long);
	length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str);
}

void	p_handler(t_flags *tab)
{
	// The void * pointer argument is printed in hexadecimal (as
    // if by %#x or %#lx). -> va arg to void *?
	ft_putstr("0x");
	put_ptr(va_arg(tab->args, unsigned long long));
}

void	o_handler(t_flags *tab)
{
	long long	arg;
	char		*str;
	int		arg_len;

	arg = 0;

	arg = va_arg(tab->args, long long);

	// All minus values fix, they go over.
	length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		// tab->is_neg = 1;
	}
	str = ft_itoa_base(arg, 8);
	arg_len = ft_strlen(str);
	tab->ret_len += arg_len;
	// if (tab->hash && *arg != '0')
		// write(1, "0", 1);
	nb_padding(tab, str);
}

void	u_handler(t_flags *tab)
{
	char	*str;
	unsigned long long arg;

	arg = 0; // Mayby not needed
	arg = va_arg(tab->args, unsigned long long);
	unsigned_length_modifiers(tab, &arg);
	if (arg < 0)
	{
		arg *= -1;
		tab->is_neg = 1;
	}
	str = ft_unsigned_itoa_base(arg, 10);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str);

}

void percent_handler(t_flags *tab)
{
	char	*stringArg;
	long long arg;
	int	prec_padding;


	prec_padding = 0;
	arg = 0; // Mayby not needed
	// arg = va_arg(tab->args, long long);
	//length_modifiers(tab, &arg);
	// stringArg = ft_itoa_base(arg, 10);
	// tab->arg_len = ft_strlen(stringArg);
	tab->arg_len += 1;
	tab->ret_len += tab->arg_len;
	if ((tab->space || tab->width) && !tab->zero && !tab->minus)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	ft_putchar('%');
	if (tab->minus && prec_padding >= 0)
		tab->ret_len += putpadding((tab->width - tab->arg_len - prec_padding), ' ');
}