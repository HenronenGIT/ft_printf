/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:27:07 by hmaronen          #+#    #+#             */
/*   Updated: 2022/02/14 11:27:12 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	/* Different flags */

	/* Empty spaces leftside */
	//printf("|%42d|\n", 21);
	//ft_printf("|%42d|\n", 21); 

	/* 0 flag */
	//printf("%02147483d\n", 42);
	//printf("%021d\n", 42);
	//ft_printf("%021d\n", 42);

	//printf("|%  042d|\n", 42);
	//printf("%i");
	//printf("%o");
	//printf("%x");
	//printf("%X");

	//printf("|%      42d|\n", 21); 
	//printf("|%5i|\n", 21);
	//printf("|%5o|\n", 21); /* Octal ? */
	//printf("|%5u|\n", 21);
	//printf("|%5x|\n", 21); /* Hexa ? */
	//printf("|%5x|\n", 11); /* Hexa ? */

	/* - */
	//printf("|%-5d|\n", 42);
	
	/* ' ' */
	//printf("% d\n", 42);
	//printf("% d\n", -42);

	/* Pad with zeroes */
	//printf("|%05d|\n", 42);

	/* Plus sign to every positive number*/
	//printf("|%+5d|\n", 42);
	//printf("|%+5d|\n", -42);

	/* Diff conversions */

	/* %c */
	//printf("%c\n", 'h');
	//ft_printf("%c\n", 'h');

	/* %s */
	//char *str = "This is a String!";
	//ft_printf("|Hive %s|\n", str);
	//printf("|Hive %s|\n", str);
	
	/* %x */
	//printf("printf:%x\n", 10);
	//ft_printf("ft_printf:%x\n", 10);
//
	//printf("printf:%x\n", 9);
	//ft_printf("ft_printf:%x\n", 9);
//
	//printf("printf:%x\n", 17);
	//ft_printf("ft_printf:%x\n", 17);
//
	//printf("printf:%x\n", 100);
	//ft_printf("ft_printf:%x\n", 100);
//
	//printf("printf:%x\n", 123);
	//ft_printf("ft_printf:%x\n", 123);

	/* %p */
	char *str = "This is a String!";
	char *ch = "c";
	int	tab[5] = {0, 1 ,2};

	printf("|%p|\n", str);
	ft_printf("|%p|\n\n", str);

	printf("|%p|\n", tab);
	ft_printf("|%p|\n\n", tab);

	/* %d */
	//int nb = 42;
	//printf("|Hello world %d|\n", nb);
	//ft_printf("|Hello world %d|\n", nb);

	/* %i */
	//printf("%i\n", 42);
	//ft_printf("%i\n", 42);

	//printf("|Hello world %d, this is test!|\n", nb);
	//ft_printf("|Hello world %d, this is test!|\n", nb);
//
//

	/* PANIC */
	//printf("%02147483646d", 1);




}