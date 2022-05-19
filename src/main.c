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
#include <limits.h>

void ft_printheader(char c)
{
	printf("##### %c #####\n", c);
}

int	main(void)
{
	// /* Different flags */

	// 	//printf("%-010.12d\n", 42);
	// 	//printf("%010.12d\n", 42);
	// 	//printf("%0.12d\n", 42);
	// 	//ft_printf("%010d Hello World!\n", 42);

	// /* Different formats */
	
	// char *str = "This is a String!";

	// /* %c */
	// 	ft_printheader('c');
		
	// 	printf("|%10c|\n", 'h');
 	//  	ft_printf("|%10c|\n\n", 'h');

	// 	printf("|%123c|\n", 'h');
	// 	ft_printf("|%123c|\n\n", 'h');

	// 	printf("|%10c%10c|\n", 'h', 'e');
	// 	ft_printf("|%10c%10c|\n", 'h', 'e');

	// 	printf("|%-10c|\n", 'h');
	// 	ft_printf("|%-10c|\n\n", 'h');

	// 	printf("|%1c|\n", 'h');
	// 	ft_printf("|%1c|\n\n", 'h');

	// 	printf("|%c|\n", 'h');
	// 	ft_printf("|%c|\n", 'h');

	// 	printf("|%c|\n", 'h');
	// 	ft_printf("|%c|\n", 'h');
	// 	/* Undefined */
	// 		//printf("|%010c|\n", 'h');

	// 		//printf("|%+c|\n", 'h');

	// 		//printf("|% c|\n", 'h');

	// 		//printf("|%0c\n", 'h');

	// /* %s */
	// 	ft_printheader('s');

	// 	printf("|Hive %s|\n", str);
	// 	ft_printf("|Hive %s|\n\n", str);

	// 	printf("|Hive %20s|\n", str);
	// 	ft_printf("|Hive %20s|\n\n", str);

	// 	printf("|Hive %-20s|\n", str);
	// 	ft_printf("|Hive %-20s|\n\n", str);

	// 	printf("|Hive %-5s %s|\n", str, str);
	// 	ft_printf("|Hive %-5s %s|\n\n", str, str);

	// 	printf("|Hive %-20s %30s|\n", str, str);
	// 	ft_printf("|Hive %-20s %30s|\n\n", str, str);

	// 	/* Undefined behavior */
	// 		//ft_printf("|Hive %010s|\n", str);
	// 		//printf("|Hive %010s|\n", str);

	/* %d */
		ft_printheader('d');
		int nb = 42;
		int neg_nb = -42;

		printf("|Hello world %d|\n", nb);
		ft_printf("|Hello world %d|\n\n", nb);

		/* Space flag */
		printf("|Hello world % 10d|\n", nb);
		ft_printf("|Hello world % 10d|\n\n", nb);

		/* 0 flag */
		printf("|Hello world %010d|\n", neg_nb);
		ft_printf("|Hello world %010d|\n\n", neg_nb);

		printf("|Hello world %010d|\n", nb);
		ft_printf("|Hello world %010d|\n\n", nb);

		printf("|Hello world %0d|\n", nb);
		ft_printf("|Hello world %0d|\n\n", nb);

		printf("|Hello world %+010d|\n", nb);
		ft_printf("|Hello world %+010d|\n\n", nb);

		printf("|Hello world %+010d|\n", neg_nb);
		ft_printf("|Hello world %+010d|\n\n", neg_nb);

		printf("|Hello world %010d|\n", nb);
		ft_printf("|Hello world %010d|\n\n", nb);

		printf("|Hello world %lld|\n", nb);
		ft_printf("|Hello world %d|\n\n", nb);

			/* Undefined behavior */
			//printf("|Hello world %#d|\n", nb);
			//ft_printf("|Hello world %#d|\n\n", nb);

	// /* %u */
	// 	printf("##### u #####\n");

	// 	printf("|%u|\n", 42);
	// 	ft_printf("|%u|\n\n", 42);
		
	// 	printf("|%u|\n", INT_MAX);
	// 	ft_printf("|%u|\n\n", INT_MAX);

	// 	printf("|%u|\n", INT_MIN);
	// 	ft_printf("|%u|\n\n", INT_MIN);

	// 	printf("|%u|\n", UINT_MAX);
	// 	ft_printf("|%u|\n\n", UINT_MAX);

	// 	printf("|%u|\n", -1);
	// 	ft_printf("|%u|\n\n", -1);
	
	// 	/* 0 flag */
	// 	printf("|Hello world %010d|\n", neg_nb);
	// 	ft_printf("|Hello world %010d|\n\n", neg_nb);

	// 	printf("|Hello world %010d|\n", nb);
	// 	ft_printf("|Hello world %010d|\n\n", nb);

	// 	printf("|Hello world %0d|\n", nb);
	// 	ft_printf("|Hello world %0d|\n\n", nb);

	// 	printf("|Hello world %+010d|\n", nb);
	// 	ft_printf("|Hello world %+010d|\n\n", nb);

	// 	printf("|Hello world %+010d|\n", neg_nb);
	// 	ft_printf("|Hello world %+010d|\n\n", neg_nb);

	// 	printf("|Hello world %010d|\n", nb);
	// 	ft_printf("|Hello world %010d|\n\n", nb);


	// // /* %i */
	// // 	printf("i\n");
	// // 	printf("%i\n", 42);
	// // 	ft_printf("%i\n", 42);

	// // 	printf("|Hello world %d, this is test!|\n", nb);
	// // 	ft_printf("|Hello world %d, this is test!|\n", nb);

	// //  /* %o */
	// // 	printf("o\n");
	// //  	printf("printf:%o\n", 42);
	// //  	ft_printf("ft_printf:%o\n", 42);

	// //  	printf("%o\n", 1234);
	// //  	ft_printf("%o\n", 1234);

	// /* %p */
	// 	printf("##### p #####\n");
	//  	char *ch = "c";
	//  	int	tab[5] = {0, 1 ,2};

	// 	printf("|%p|\n", str);
	// 	ft_printf("|%p|\n\n", str);

	// 	printf("|%p|\n", tab);
	// 	ft_printf("|%p|\n\n", tab);

	// 	printf("|%-p|\n", tab);
	// 	ft_printf("|%-p|\n\n", tab);

	// 	/* Undefined behavior */   
	// 		//printf("|%+p|\n", tab);
	// 		//ft_printf("|%+p|\n\n", tab);

	// 		//printf("|% 10p|\n", tab);
	// 		//ft_printf("|% 10p|\n\n", tab);

	// 		//printf("|%0p|\n", tab);
	// 		//ft_printf("|%0p|\n\n", tab);

	// 		//printf("|%#p|\n", str);
	// 		//ft_printf("|%#p|\n\n", str);
	// /* %X */
	// 	printf("##### X #####\n");

	// 	printf("|%X|\n", 0);
	// 	ft_printf("|%X|\n\n", 0);

	// 	printf("|%X|\n", 17);
	// 	ft_printf("|%X|\n\n", 17);

	// 	printf("|%X|\n", 123);
	// 	ft_printf("|%X|\n\n", 123);

	// 	printf("|%X|\n", 9321124);
	// 	ft_printf("|%X|\n\n", 9321124);

	// 	/* # flag */
	// 	printf("|%#X|\n", 9321124);
	// 	ft_printf("|%#X|\n\n", 9321124);

	// 	printf("|%#X|\n", 9321124);
	// 	ft_printf("|%#X|\n\n", 9321124);

	// 	printf("|%010X|\n", 9321124);
	// 	ft_printf("|%010X|\n\n", 9321124);

	// 	printf("|%#010X|\n", 9321124);
	// 	ft_printf("|%#010X|\n\n", 9321124);

	// /* %x */
	// 		ft_printheader('x');

	// 	 	printf("|%x|\n", 0);
	// 	 	ft_printf("|%x|\n\n", 0);

	// 	 	printf("|%x|\n", 17);
	// 	 	ft_printf("|%x|\n\n", 17);

	// 	 	printf("|%x|\n", 123);
	// 	 	ft_printf("|%x|\n\n", 123);

	// 	 	printf("|%x|\n", 9321124);
	// 	 	ft_printf("|%x|\n\n", 9321124);

	// 		/* # flag */
	// 	 	printf("|%#x|\n", 9321124);
	// 	 	ft_printf("|%#x|\n\n", 9321124);

	// 	 	printf("|%#0x|\n", 9321124);
	// 	 	ft_printf("|%#0x|\n\n", 9321124);

	// 	 	printf("|%#015x|\n", 9321124);
	// 	 	ft_printf("|%#015x|\n\n", 9321124);

	// 		/* - flag */
	// 	 		//printf("|%-015x|\n", 9321124);
	// 	 		//ft_printf("|%-015x|\n\n", 9321124);

	// 	 	printf("|%-15x|\n", 9321124);
	// 	 	ft_printf("|%-15x|\n\n", 9321124);


			/* Undefined behavior */
				//printf("|%+15x|\n", 9321124);
				//ft_printf("|%+15x|\n\n", 9321124);
				
		 		//printf("|%+#015x|\n", 9321124);

	/* PANIC */
		//printf("%02147483646d", nbb);

}