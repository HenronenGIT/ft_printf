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

// Flags could be added to own functions and own file
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
	// int		arg_len;
	// int		prec_padding;
	int		nb;

	nb = va_arg(tab->args, int);
	if (nb < 0)
	{
		nb *= -1;
		tab->is_neg = 1;
	}
	str = ft_itoa(nb);
	tab->arg_len = ft_strlen(str);
	nb_padding(tab, str);
	// tab->ret_len += arg_len;
	// prec_padding = 0;
	// if (tab->prec_len)
	// 	prec_padding = tab->prec_len - arg_len;
	// /* Width padding */
	// if ((tab->space || tab->width) && !tab->zero && !tab->minus)
	// 	tab->ret_len += putpadding((tab->width - arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	// /* Precision and Zero flag on */
	// if (tab->zero && tab->precision)
	// 	tab->ret_len += putpadding((tab->width - arg_len - prec_padding - (tab->is_neg || tab->plus || tab->space)), ' ');
	// /* Sign */
	// if (tab->plus || tab->is_neg || tab->space)
	// 	plus_flag(tab);
	// /* Space and Zero flag */
	// if (tab->space && tab->zero && !tab->precision)
	// 	tab->ret_len += putpadding((tab->width - arg_len - prec_padding), '0');
	// /* Precision */
	// if (tab->precision)
	// 	tab->ret_len += putpadding(prec_padding, '0');
	// /* Zero padding */
	// if (tab->zero && !tab->precision && !tab->space)
	// 	tab->ret_len += putpadding((tab->width - arg_len - prec_padding), '0');
	// /* Print argument */
	// ft_putstr(str);
	// /* With padding right side */
	// if (tab->minus)
	// 	tab->ret_len += putpadding((tab->width - arg_len - prec_padding), ' ');
}

void	i_handler(t_flags *tab)
{
	char *str;

	str = ft_itoa(va_arg(tab->args, int));
	tab->ret_len += ft_strlen(str);
	ft_putstr(str);
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
	char	*arg;
	int		arg_len;

	arg = ft_itoa_base(va_arg(tab->args, int), 8);
	arg_len = ft_strlen(arg);
	tab->ret_len += arg_len;
	if (tab->hash && *arg != '0')
		tab->ret_len += write(1, "0", 1);
	if (tab->space)
	if (tab->minus)

	ft_putstr(arg);
}

void	u_handler(t_flags *tab)
{
	unsigned int	nb;
	int		str_len;
	int		is_neg;
	char	*str;

	is_neg = 0;
	nb = va_arg(tab->args, unsigned int);
	str = ft_itoa_base(nb, 10);
	str_len = ft_strlen(str);
	tab->ret_len += str_len;

	if (tab->plus && !is_neg)
	{
		write(1, "+", 1);
		str_len += 1;
	}
	if (tab->width && !tab->zero)
	{
		tab->ret_len += putpadding((tab->width - str_len), ' ');
	}
	if (tab->zero)
	{
		tab->ret_len += putpadding((tab->width - str_len), '0');
	}
	ft_putstr(str);
}