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
	char	*str;
	int		remain;
	int		i;

	if (dec == 0)
		return ("0");
	str = ft_strnew(ft_digit_counter(dec, base));
	i = 0;
	remain = 0;
	while (dec != 0)
	{
		remain = dec % base;
		if (remain < 10)
			str[i] = remain + 48;
		else
			str[i] = remain + 87;
		dec = dec / base;
		i++;
	}
	str = ft_strrev(str);
	return (str);
}

char	*ft_unsigned_itoa_base(unsigned long long dec, int base)
{
	char	*str;
	int		remain;
	int		i;

	if (dec == 0)
		return ("0");
	str = ft_strnew(ft_digit_counter(dec, base));
	i = 0;
	remain = 0;
	while (dec != 0)
	{
		remain = dec % base;
		if (remain < 10)
			str[i] = remain + 48;
		else
			str[i] = remain + 87;
		dec = dec / base;
		i++;
	}
	str = ft_strrev(str);
	return (str);
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

	i = -1;
	while (++i < width)
		ft_putchar(ch);
	return (i);
}
