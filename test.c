/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:57:56 by hmaronen          #+#    #+#             */
/*   Updated: 2022/06/22 20:57:58 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

// gcc test.c libftprintf.a -D "ORIGINAL"
#ifdef ORIGINAL
	# define PRINTER printf
	# define PRINTER_STR "printf"
#else
	# define PRINTER ft_printf
	# define PRINTER_STR "ft_printf"
#endif

int	main(void)
{
	FILE *printf_file;

	if((printf_file=freopen(PRINTER_STR".txt", "w" ,stdout)) == NULL)
	{
		printf("Cannot open "PRINTER_STR".txt.\n");
		exit(1);
	}
	printf("====== c Specifier ======\n");
	fflush(stdout);
	printf("%d\n", PRINTER("|%c|", 'h'));
	fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h'));
	fflush(stdout);
	fclose(printf_file);
}