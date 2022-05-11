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
char	*ft_itoa_base(int dec, int base)
{
	char	*hexa;
	int		remain;
	int		i;

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
