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
	if (tab->width && !tab->minus)
		tab->ret_len = putpadding((tab->width - 1), ' ');
	ft_putchar(ch);
	if (tab->width && tab->minus)
		tab->ret_len = putpadding((tab->width - 1), ' ');
}

void	s_handler(t_flags *tab)
{
	char *str;
	str = va_arg(tab->args, char*);

	if (tab->width && !tab->minus)
	{
		putpadding((tab->width - ft_strlen(str)), ' ');
	}
	ft_putstr(str);
	if (tab->width && tab->minus)
	{
		putpadding((tab->width - ft_strlen(str)), ' ');
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
	if (tab->hash)
	{
		ft_putstr("0x");
		tab->width -= 2;
	}
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
	int		str_len;
	int		is_neg;

	is_neg = 0;
	if (tab->ll)
		str = ft_itoa(va_arg(tab->args, int));

	str = ft_itoa(va_arg(tab->args, int));

	str_len = ft_strlen(str);
	/* Negtive number check */
	if (str[0] == '-')
	{
		is_neg = 1;
		write(1, "-", 1);
		str++;
		//str_len -= 1;
	}

	if (tab->plus && !is_neg)
	{
		write(1, "+", 1);
		str_len += 1;
	}
	if (tab->width && !tab->zero)
	{
		putpadding((tab->width - str_len), ' ');
	}
	if (tab->zero)
	{
		putpadding((tab->width - str_len), '0');
	}
	ft_putstr(str);
}

void	i_handler(t_flags *tab)
{
	ft_putstr(ft_itoa(va_arg(tab->args, int)));
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
	ft_putstr(ft_itoa_base(va_arg(tab->args, int), 8));
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

	if (tab->plus && !is_neg)
	{
		write(1, "+", 1);
		str_len += 1;
	}
	if (tab->width && !tab->zero)
	{
		putpadding((tab->width - str_len), ' ');
	}
	if (tab->zero)
	{
		putpadding((tab->width - str_len), '0');
	}

	ft_putstr(str);
}