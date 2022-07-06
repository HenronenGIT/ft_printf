/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_itoa_base.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 22:29:12 by hmaronen          #+#    #+#             */
/*   Updated: 2022/07/06 22:29:13 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_unsigned_itoa_base(unsigned long dec, int base)
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
