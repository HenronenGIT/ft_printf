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

void ft_printheader(char c)
{
	printf("##### %c #####\n", c);
}

int	main(void)
{
	/* Different flags */

	/* Empty spaces leftside */
		//printf("|%42d|\n", 21);
		//ft_printf("|%42d|\n", 21); 

	/* 0 flag */
		//printf("%-010.12d\n", 42);
		//printf("%010.12d\n", 42);
		//printf("%0.12d\n", 42);
		//ft_printf("%010d Hello World!\n", 42);

		//printf("|%  042d|\n", 42);

		//printf("%010i\n", 42);
		//printf("%010o\n", 42);
		//printf("%010x\n", 42);
		//printf("%010X\n", 42);

	/* - */
		//printf("|%-5d|\n", 42);
	
	/* ' ' */
		//printf("% d\n", 42);
		//printf("% d\n", -42);

	/* Plus sign to every positive number*/
		//printf("|%+5d|\n", 42);
		//printf("|%+5d|\n", -42);

	/* Different formats */
	char *str = "This is a String!";

	/* %c */
		ft_printheader('c');
		
		printf("|%10c|\n", 'h');
 	 	ft_printf("|%10c|\n\n", 'h');

		printf("|%123c|\n", 'h');
		ft_printf("|%123c|\n\n", 'h');

		printf("|%10c%10c|\n", 'h', 'e');
		ft_printf("|%10c%10c|\n", 'h', 'e');

		printf("|%-10c|\n", 'h');
		ft_printf("|%-10c|\n\n", 'h');

		printf("|%1c|\n", 'h');
		ft_printf("|%1c|\n\n", 'h');

		printf("|%c|\n", 'h');
		ft_printf("|%c|\n", 'h');
		/* Undefined */
			//printf("|%010c|\n", 'h');

			//printf("|%+c|\n", 'h');

			//printf("|% c|\n", 'h');

			//printf("|%0c\n", 'h');


	/* %s */
		ft_printheader('s');

		printf("|Hive %s|\n", str);
		ft_printf("|Hive %s|\n\n", str);

		printf("|Hive %20s|\n", str);
		ft_printf("|Hive %20s|\n\n", str);

		/* Undefined behavior */
			//ft_printf("|Hive %010s|\n", str);
			//printf("|Hive %010s|\n", str);

	
	// /* %x */
	// 	printf("x\n");
	// 	printf("printf:%x\n", 10);
	// 	ft_printf("ft_printf:%x\n", 10);
	// 	printf("printf:%x\n", 9);
	// 	ft_printf("ft_printf:%x\n", 9);
	// 	printf("printf:%x\n", 17);
	// 	ft_printf("ft_printf:%x\n", 17);
	// 	printf("printf:%x\n", 100);
	// 	ft_printf("ft_printf:%x\n", 100);
	// 	printf("printf:%x\n", 123);
	// 	ft_printf("ft_printf:%x\n", 123);

	// /* %p */
	// 	printf("p\n");
	// 	char *ch = "c";
	// 	int	tab[5] = {0, 1 ,2};

	// 	printf("|%p|\n", str);
	// 	ft_printf("|%p|\n\n", str);

	// 	printf("|%p|\n", tab);
	// 	ft_printf("|%p|\n\n", tab);

	// /* %d */
	// 	printf("d\n");
	// 	int nb = 42;
	// 	printf("|Hello world %d|\n", nb);
	// 	ft_printf("|Hello world %d|\n", nb);

	// /* %i */
	// 	printf("i\n");
	// 	printf("%i\n", 42);
	// 	ft_printf("%i\n", 42);

	// 	printf("|Hello world %d, this is test!|\n", nb);
	// 	ft_printf("|Hello world %d, this is test!|\n", nb);

	//  /* %o */
	// 	printf("o\n");
	//  	printf("printf:%o\n", 42);
	//  	ft_printf("ft_printf:%o\n", 42);

	//  	printf("%o\n", 1234);
	//  	ft_printf("%o\n", 1234);

	/* PANIC */
		//printf("%02147483646d", nbb);

}