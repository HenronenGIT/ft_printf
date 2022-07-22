/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dtob.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 20:09:19 by hmaronen          #+#    #+#             */
/*   Updated: 2022/07/21 20:09:20 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	Decimal to binary converter */
char	*ft_dtob(long number)
{
	long	size;
	int		i;
	char	*result;
	int		modulo;

	modulo = 0;
	if (number == 0 || number < 0)
		return (ft_strdup("0"));
	result = NULL;
	size = ft_digit_counter(number, 2);
	result = ft_strnew(size);
	if (!result)
		return (NULL);
	i = (size - 1);
	while (number > 0)
	{
		modulo = (number % 2);
		if (modulo == 0)
			result[i] = '0';
		else
			result[i] = '1';
		number = (number / 2);
		i -= 1;
	}
	return (result);
}
