/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 14:26:28 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/11 14:26:39 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ADD TO LIBFT
//char	*ft_itoa_base(int dec, int base)
char	*ft_itoa_base(long long dec, int base)
{
	char	*hexa;
	int		remain;
	int		i;
	int		offset;

	if (dec == 0)
		return ("0");
	// Wrong number??? LONG LONG MAX?
	// if (dec == -9223372036854775808)
		// return (ft_strdup("-9223372036854775808"));
	hexa = ft_strnew(ft_digit_counter(dec, base));
	i = 0;
	remain = 0;
	while (dec != 0)
	{
		remain = dec % base;
		if (remain < 10)
			hexa[i] = remain + 48;
		else
			hexa[i] = remain + 87;
		dec = dec / base;
		i++;
	}
	hexa = ft_strrev(hexa);
	return (hexa);
}

void	put_ptr(uintptr_t addr)
{
	if (addr >= 16)
	{
		put_ptr(addr / 16);
		put_ptr(addr % 16);
	}
	else
	{
		if (addr < 10)
			ft_putchar(addr + 48);
		else
			ft_putchar(addr + 87);
	}
}

int	putpadding(int width, char ch)
{
	int i;

	i = 0;
	while (i < width)
	{
		ft_putchar(ch);
		i++;
	}
	return (i);
}
