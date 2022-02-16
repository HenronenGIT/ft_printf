/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:02:51 by hmaronen          #+#    #+#             */
/*   Updated: 2022/02/16 14:02:51 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

void	print_numbers(int count, ...)
{
	int	i;
	int	nb;

	i = 0;
	va_list args;
	va_start(args, count);
	while (i < count)
	{
		nb = va_arg(args, int);
		printf("%d\n", nb);
		i++;
	}
	va_end(args);
	 
}

int	main(void)
{
	print_numbers(2, 21, 42);
	return (0);
}