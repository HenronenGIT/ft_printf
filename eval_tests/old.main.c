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

void	test_d()
{
	unsigned int	uint_min;
	unsigned int	uint_max;
	int		nb;
	int		neg_nb;
	int		int_max;
	int		int_min;
	long	long_min;
	long	long_max;
	short	short_min;
	short	short_max;
	char	char_min;
	char	char_max;
	char	ch;

	neg_nb = -42;
	nb = 42;
	short_max = SHRT_MAX;
	short_min = SHRT_MIN;
	long_max = LONG_MAX;
	long_min = LONG_MIN;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;
	ch = 'a';
	ft_printheader('d');
	/* Without flags */
	printf("%d\n", printf("|Hello world %d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %d|", nb));

	printf("%d\n", printf("|Hello world %d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %d|", neg_nb));
	/* Space flag */
	printf("%d\n", printf("|Hello world %10d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %10d|", nb));

	printf("%d\n", printf("|Hello world %10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %10d|", neg_nb));

	printf("%d\n", printf("|Hello world % 10d|", nb));
	printf("%d\n\n", ft_printf("|Hello world % 10d|", nb));

	printf("%d\n", printf("|Hello world % 10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world % 10d|", neg_nb));
	/* 0 flag */
	printf("%d\n", printf("|Hello world %010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %010d|", nb));

	printf("%d\n", printf("|Hello world %010d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %010d|", neg_nb));

	printf("%d\n", printf("|Hello world %0d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %0d|", nb));

	printf("%d\n", printf("|Hello world %+010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %+010d|", nb));

	printf("%d\n", printf("|Hello world %+010d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %+010d|", neg_nb));
	/* Zero and Space */
	printf("%d\n", printf("|Hello world %0 10d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %0 10d|", nb));

	printf("%d\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	printf("%d\n", printf("|Hello world % 010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world % 010d|", nb));

	printf("%d\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	/* - flag */
	printf("%d\n", printf("|Hello world %-10d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %-10d|", nb));

	printf("%d\n", printf("|Hello world %-10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %-10d|", neg_nb));

	printf("%d\n", printf("|Hello world %-+10d|", nb));
	printf("%d\n\n", printf("|Hello world %-+10d|", nb));

	printf("%d\n", printf("|Hello world %-+10d|", neg_nb));
	printf("%d\n\n", printf("|Hello world %-+10d|", neg_nb));

	printf("%d\n", printf("|Decimal test%+-10d|", nb));
	printf("%d\n\n", ft_printf("|Decimal test%+-10d|", nb));

	printf("%d\n", printf("|Decimal test%+-10d|", neg_nb));
	printf("%d\n\n", ft_printf("|Decimal test%+-10d|", neg_nb));
		 
	// /* Precision */
	printf("#### Precision ####\n");
	printf("%d\n", printf("|%.5d|", nb));
	printf("%d\n\n", ft_printf("|%.5d|", nb));

	printf("%d\n", printf("|%.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%.5d|", neg_nb));

	printf("%d\n", printf("|%-.5d|", nb));
	printf("%d\n\n", ft_printf("|%-.5d|", nb));

	printf("%d\n", printf("|%-.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%-.5d|", neg_nb));

	printf("%d\n", printf("|%+.5d|", nb));
	printf("%d\n\n", ft_printf("|%+.5d|", nb));

	printf("%d\n", printf("|%+.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%+.5d|", neg_nb));

	printf("%d\n", printf("|%.d|", nb));
	printf("%d\n\n", ft_printf("|%.d|", nb));
			// Not sure
			// printf("%d\n", printf("|%.-5d|", nb));
			// printf("%d\n\n", ft_printf("|%.-5d|", nb));
	printf("%d\n", printf("|%5.d|", nb));
	printf("%d\n\n", ft_printf("|%5.d|", nb));
		//
	printf("%d\n", printf("|%5.5d|", nb));
	printf("%d\n\n", ft_printf("|%5.5d|", nb));

	printf("%d\n", printf("|%1.5d|", nb));
	printf("%d\n\n", ft_printf("|%1.5d|", nb));

	printf("%d\n", printf("|%10.5d|", nb));
	printf("%d\n\n", ft_printf("|%10.5d|", nb));

	printf("%d\n", printf("|%-10.5d|", nb));
	printf("%d\n\n", ft_printf("|%-10.5d|", nb));

	printf("%d\n", printf("|%-10.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%-10.5d|", neg_nb));

	printf("%d\n", printf("|% 10.5d|", nb));
	printf("%d\n\n", ft_printf("|% 10.5d|", nb));

	printf("%d\n", printf("|%010.5d|", nb));
	printf("%d\n\n", ft_printf("|%010.5d|", nb));

	printf("%d\n", printf("|%010.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%010.5d|", neg_nb));

	printf("%d\n", printf("|%+010.5d|", nb));
	printf("%d\n\n", ft_printf("|%+010.5d|", nb));

	printf("%d\n", printf("|%+010.5d|", neg_nb));
	printf("%d\n\n", ft_printf("|%+010.5d|", neg_nb));

	printf("%d\n", printf("|% 010.5d|", nb));
	printf("%d\n\n", ft_printf("|% 010.5d|", nb));
	/* Length modifiers */
	/* hh flag */
	printf("%d\n", printf("|%hhd|", ch));
	printf("%d\n\n", ft_printf("|%hhd|", ch));

	printf("%d\n", printf("|%hhd|", char_min));
	printf("%d\n\n", ft_printf("|%hhd|", char_min));

	printf("%d\n", printf("|%hhd|", char_max));
	printf("%d\n\n", ft_printf("|%hhd|", char_max));
	/* h flag */
	printf("%d\n", printf("|%hd|", short_min));
	printf("%d\n\n", ft_printf("|%hd|", short_min));

	printf("%d\n", printf("|%hd|", short_max));
	printf("%d\n\n", ft_printf("|%hd|", short_max));

	printf("%d\n", printf("|%hd|", short_min));
	printf("%d\n\n", ft_printf("|%hd|", short_min));

	printf("%d\n", printf("|%ld|", long_min));
	printf("%d\n\n", ft_printf("|%ld|", long_min));

	printf("%d\n", printf("|%ld|", long_max));
	printf("%d\n\n", ft_printf("|%ld|", long_max));

	/* Undefined behavior */
	//printf("|Hello world %#d|\n", nb);
	//ft_printf("|Hello world %#d|\n\n", nb);
}

void	test_c()
{
	ft_printheader('c');

	// Max int to width

	printf("%d\n", printf("|%c|", 'h'));
	printf("%d\n\n", ft_printf("|%c|", 'h'));
		
	printf("%d\n", printf("|%10c|", 'h'));
	printf("%d\n\n", ft_printf("|%10c|", 'h'));

	printf("%d\n", printf("|%10c|", 'h'));
	printf("%d\n\n", ft_printf("|%10c|", 'h'));

	printf("%d\n", printf("|%123c|", 'h'));
	printf("%d\n\n", ft_printf("|%123c|", 'h'));

	printf("%d\n", printf("|%10c%10c|", 'h', 'e'));
	printf("%d\n\n", ft_printf("|%10c%10c|", 'h', 'e'));

	printf("%d\n", printf("|%-10c|", 'h'));
	printf("%d\n\n", ft_printf("|%-10c|", 'h'));

	printf("%d\n", printf("|%1c|", 'h'));
	printf("%d\n\n", ft_printf("|%1c|", 'h'));

	printf("%d\n", printf("|%c|", 'h'));
	printf("%d\n\n", ft_printf("|%c|", 'h'));

	printf("%d\n", printf("|%c|", 'h'));
	printf("%d\n\n", ft_printf("|%c|", 'h'));
	/* hh flag */

		/* Undefined */
			// printf("%d\n", printf("|%.5c|", 'h'));
			// printf("|%010c|\n", 'h');
			//printf("|%#c|\n", 'h');
			//printf("|%.0c|\n", 'h');
			//printf("|%010c|\n", 'h');
			// printf("|%+c|\n", 'h');
			// printf("|% c|\n", 'h');
			// printf("|%0c\n", 'h');
}

void	test_s()
{
	char *str = "String!";

	/* %s */
	ft_printheader('s');

	printf("%d\n", printf("|Hive %s|", str));
	printf("%d\n\n", ft_printf("|Hive %s|", str));

	/* WIDTH */
	printf("%d\n", printf("|Hive %20s|", str));
	printf("%d\n\n", ft_printf("|Hive %20s|", str));

	/* MINUS */
	printf("%d\n", printf("|Hive %-20s|", str));
	printf("%d\n\n", ft_printf("|Hive %-20s|", str));

	printf("%d\n", printf("|Hive %-5s %s|", str, str));
	printf("%d\n\n", ft_printf("|Hive %-5s %s|", str, str));

	/* PRECISION */
	printf("%d\n", printf("|Hive %.s|", str));
	printf("%d\n\n", ft_printf("|Hive %.s|", str));
	/* with Width */
	printf("%d\n", printf("|Hive %10.s|", str));
	printf("%d\n\n", ft_printf("|Hive %10.s|", str));

	printf("%d\n", printf("|Hive %10.5s|", str));
	printf("%d\n\n", ft_printf("|Hive %10.5s|", str));

	// 	/* Undefined behavior */
	//printf("%d\n", printf("|Hive %hhs|", str));
	// printf("%d\n", printf("|Hive %hs|", str));
	//printf("%d\n", printf("|Hive %lls|", str));
	//printf("%d\n", printf("|Hive % 10s|", str));
	//printf("|Hive %010s|\n", str);

}

void	test_u()
{
	int	neg_nb;
	int nb;

	nb = 42;
	neg_nb = -42;
		/* %u */
	printf("##### u #####\n");

	printf("%d\n", printf("|%u|", 42));
	printf("%d\n\n", ft_printf("|%u|", 42));
		
	printf("%d\n", printf("|%u|", INT_MAX));
	printf("%d\n\n", ft_printf("|%u|", INT_MAX));

	printf("%d\n", printf("|%u|", INT_MIN));
	printf("%d\n\n", ft_printf("|%u|", INT_MIN));

	printf("%d\n", printf("|%u|", UINT_MAX));
	printf("%d\n\n", ft_printf("|%u|", UINT_MAX));

	printf("%d\n", printf("|%u|", -1));
	printf("%d\n\n", ft_printf("|%u|", -1));
	
	/* 0 flag */
	printf("%d\n", printf("|Hello world %010d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %010d|", neg_nb));

	printf("%d\n", printf("|Hello world %010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %010d|", nb));

	printf("%d\n", printf("|Hello world %0d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %0d|", nb));

	printf("%d\n", printf("|Hello world %+010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %+010d|", nb));

	printf("%d\n", printf("|Hello world %+010d|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %+010d|", neg_nb));

	printf("%d\n", printf("|Hello world %010d|", nb));
	printf("%d\n\n", ft_printf("|Hello world %010d|", nb));
}

void	test_i()
{
	int		nb;
	int		neg_nb;
	int		int_max;
	int		int_min;
	unsigned int	uint_min;
	unsigned int	uint_max;
	long	max_long;
	long	min_long;
	short	short_min;
	short	short_max;
	char	char_min;
	char	char_max;

	neg_nb = -42;
	nb = 42;
	short_max = SHRT_MAX;
	short_min = SHRT_MIN;
	max_long = LONG_MAX;
	min_long = LONG_MIN;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;
	ft_printheader('i');
	
	/* Length modifiers */
	printf("%i\n", printf("|%i|", uint_min));
	printf("%i\n\n", ft_printf("|%i|", uint_min));

	printf("%i\n", printf("|%i|", uint_max));
	printf("%i\n\n", ft_printf("|%i|", uint_max));

	printf("%i\n", printf("|%i|", int_min));
	printf("%i\n\n", ft_printf("|%i|", int_min));

	printf("%i\n", printf("|%i|", int_max));
	printf("%i\n\n", ft_printf("|%i|", int_max));
	/* hh */
	printf("%i\n", printf("|%hhi|", char_min));
	printf("%i\n\n", ft_printf("|%hhi|", char_min));

	printf("%i\n", printf("|%hhi|", char_max));
	printf("%i\n\n", ft_printf("|%hhi|", char_max));
	/* h */
	printf("%i\n", printf("|%hi|", short_min));
	printf("%i\n\n", ft_printf("|%hi|", short_max));
	/* l */
	printf("%i\n", printf("|%li|", max_long));
	printf("%i\n\n", ft_printf("|%li|", max_long));

	printf("%i\n", printf("|%li|", min_long));
	printf("%i\n\n", ft_printf("|%li|", min_long));
	/* ll */
	// printf("%i\n", printf("|%lli|", int_max));
	// printf("%i\n\n", ft_printf("|%lli|", int_max));

	// printf("%i\n", printf("|Hello world %i|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %i|", nb));

	// printf("%i\n", printf("|Hello world %i|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %i|", neg_nb));
	// /* Space flag */
	// printf("%i\n", printf("|Hello world %10d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %10d|", nb));

	// printf("%i\n", printf("|Hello world %10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %10d|", neg_nb));

	// printf("%i\n", printf("|Hello world % 10d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world % 10d|", nb));

	// printf("%i\n", printf("|Hello world % 10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world % 10d|", neg_nb));
	// /* 0 flag */
	// printf("%i\n", printf("|Hello world %010d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %010d|", nb));

	// printf("%i\n", printf("|Hello world %010d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %010d|", neg_nb));

	// printf("%i\n", printf("|Hello world %0d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %0d|", nb));

	// printf("%i\n", printf("|Hello world %+010d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %+010d|", nb));

	// printf("%i\n", printf("|Hello world %+010d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %+010d|", neg_nb));
	// /* Zero and Space */
	// printf("%i\n", printf("|Hello world %0 10d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %0 10d|", nb));

	// printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	// printf("%i\n", printf("|Hello world % 010d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world % 010d|", nb));

	// printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	// /* - flag */
	// printf("%i\n", printf("|Hello world %-10d|", nb));
	// printf("%i\n\n", ft_printf("|Hello world %-10d|", nb));

	// printf("%i\n", printf("|Hello world %-10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Hello world %-10d|", neg_nb));

	// printf("%i\n", printf("|Hello world %-+10d|", nb));
	// printf("%i\n\n", printf("|Hello world %-+10d|", nb));

	// printf("%i\n", printf("|Hello world %-+10d|", neg_nb));
	// printf("%i\n\n", printf("|Hello world %-+10d|", neg_nb));

	// printf("%i\n", printf("|Decimal test%+-10d|", nb));
	// printf("%i\n\n", ft_printf("|Decimal test%+-10d|", nb));

	// printf("%i\n", printf("|Decimal test%+-10d|", neg_nb));
	// printf("%i\n\n", ft_printf("|Decimal test%+-10d|", neg_nb));
		 
	// // /* Precision */
	// printf("#### Precision ####\n");
	// printf("%i\n", printf("|%.5d|", nb));
	// printf("%i\n\n", ft_printf("|%.5d|", nb));

	// printf("%i\n", printf("|%.5d|", neg_nb));
	// printf("%i\n\n", ft_printf("|%.5d|", neg_nb));

	// printf("%i\n", printf("|%-.5d|", nb));
	// printf("%i\n\n", ft_printf("|%-.5d|", nb));

	// printf("%i\n", printf("|%-.5d|", neg_nb));
	// printf("%i\n\n", ft_printf("|%-.5d|", neg_nb));

	// printf("%i\n", printf("|%+.5d|", nb));
	// printf("%i\n\n", ft_printf("|%+.5d|", nb));

	// printf("%i\n", printf("|%+.5d|", neg_nb));
	// printf("%i\n\n", ft_printf("|%+.5d|", neg_nb));

	// printf("%i\n", printf("|%.d|", nb));
	// printf("%i\n\n", ft_printf("|%.d|", nb));
	// 		// Not sure
	// 		// printf("%i\n", printf("|%.-5d|", nb));
	// 		// printf("%i\n\n", ft_printf("|%.-5d|", nb));
	// printf("%i\n", printf("|%5.d|", nb));
	// printf("%i\n\n", ft_printf("|%5.d|", nb));
	// 	//
	// printf("%i\n", printf("|%5.5d|", nb));
	// printf("%i\n\n", ft_printf("|%5.5d|", nb));

	// printf("%i\n", printf("|%1.5d|", nb));
	// printf("%i\n\n", ft_printf("|%1.5d|", nb));

	// printf("%i\n", printf("|%10.5d|", nb));
	// printf("%i\n\n", ft_printf("|%10.5d|", nb));

	// printf("%i\n", printf("|%-10.5d|", nb));
	// printf("%i\n\n", ft_printf("|%-10.5d|", nb));

	// printf("%i\n", printf("|%-10.5d|", neg_nb));
	// printf("%i\n\n", ft_printf("|%-10.5d|", neg_nb));

	// printf("%i\n", printf("|% 10.5d|", nb));
	// printf("%i\n\n", ft_printf("|% 10.5d|", nb));

	// printf("%i\n", printf("|%010.5d|", nb));
	// printf("%i\n\n", ft_printf("|%010.5d|", nb));

	// 	printf("%i\n", printf("|%010.5d|", neg_nb));
	// 	printf("%i\n\n", ft_printf("|%010.5d|", neg_nb));

	// 	printf("%i\n", printf("|%+010.5d|", nb));
	// 	printf("%i\n\n", ft_printf("|%+010.5d|", nb));

	// 	printf("%i\n", printf("|%+010.5d|", neg_nb));
	// 	printf("%i\n\n", ft_printf("|%+010.5d|", neg_nb));

	// 	printf("%i\n", printf("|% 010.5d|", nb));
	// 	printf("%i\n\n", ft_printf("|% 010.5d|", nb));
}

void	test_o()
{
	unsigned int	uint_min;
	unsigned int	uint_max;
	char			char_min;
	char			char_max;
	int				nb;
	int				neg_nb;
	int				int_max;
	int				int_min;
	short			short_min;
	short			short_max;
	long			long_min;
	long			long_max;
	long long		llong_min;
	long long		llong_max;

	neg_nb = -42;
	nb = 42;
	short_max = SHRT_MAX;
	short_min = SHRT_MIN;
	// long_min = LONG_MIN;
	// long_max = LONG_MAX;
	long_min = 	-9223372036854775808;
	long_max = 9223372036854775807;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;
	ft_printheader('o');

		printf("%o\n", printf("|Hello world %o|", nb));
	printf("%o\n\n", ft_printf("|Hello world %o|", nb));

	printf("%o\n", printf("|Hello world %o|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %o|", neg_nb));
	/* Space flag */
	printf("%o\n", printf("|Hello world %10d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %10d|", nb));

	printf("%o\n", printf("|Hello world %10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %10d|", neg_nb));

	printf("%o\n", printf("|Hello world % 10d|", nb));
	printf("%o\n\n", ft_printf("|Hello world % 10d|", nb));

	printf("%o\n", printf("|Hello world % 10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world % 10d|", neg_nb));
	/* 0 flag */
	printf("%o\n", printf("|Hello world %010d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %010d|", nb));

	printf("%o\n", printf("|Hello world %010d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %010d|", neg_nb));

	printf("%o\n", printf("|Hello world %0d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %0d|", nb));

	printf("%o\n", printf("|Hello world %+010d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %+010d|", nb));

	printf("%o\n", printf("|Hello world %+010d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %+010d|", neg_nb));
	/* Zero and Space */
	printf("%o\n", printf("|Hello world %0 10d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %0 10d|", nb));

	printf("%o\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	printf("%o\n", printf("|Hello world % 010d|", nb));
	printf("%o\n\n", ft_printf("|Hello world % 010d|", nb));

	printf("%o\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	/* - flag */
	printf("%o\n", printf("|Hello world %-10d|", nb));
	printf("%o\n\n", ft_printf("|Hello world %-10d|", nb));

	printf("%o\n", printf("|Hello world %-10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Hello world %-10d|", neg_nb));

	printf("%o\n", printf("|Hello world %-+10d|", nb));
	printf("%o\n\n", printf("|Hello world %-+10d|", nb));

	printf("%o\n", printf("|Hello world %-+10d|", neg_nb));
	printf("%o\n\n", printf("|Hello world %-+10d|", neg_nb));

	printf("%o\n", printf("|Decimal test%+-10d|", nb));
	printf("%o\n\n", ft_printf("|Decimal test%+-10d|", nb));

	printf("%o\n", printf("|Decimal test%+-10d|", neg_nb));
	printf("%o\n\n", ft_printf("|Decimal test%+-10d|", neg_nb));

	// /* Precision */
	printf("#### Precision ####\n");
	printf("%o\n", printf("|%.5d|", nb));
	printf("%o\n\n", ft_printf("|%.5d|", nb));

	printf("%o\n", printf("|%.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%.5d|", neg_nb));

	printf("%o\n", printf("|%-.5d|", nb));
	printf("%o\n\n", ft_printf("|%-.5d|", nb));

	printf("%o\n", printf("|%-.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%-.5d|", neg_nb));

	printf("%o\n", printf("|%+.5d|", nb));
	printf("%o\n\n", ft_printf("|%+.5d|", nb));

	printf("%o\n", printf("|%+.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%+.5d|", neg_nb));

	printf("%o\n", printf("|%.d|", nb));
	printf("%o\n\n", ft_printf("|%.d|", nb));
			// Not sure
			// printf("%o\n", printf("|%.-5d|", nb));
			// printf("%o\n\n", ft_printf("|%.-5d|", nb));
	printf("%o\n", printf("|%5.d|", nb));
	printf("%o\n\n", ft_printf("|%5.d|", nb));
		//
	printf("%o\n", printf("|%5.5d|", nb));
	printf("%o\n\n", ft_printf("|%5.5d|", nb));

	printf("%o\n", printf("|%1.5d|", nb));
	printf("%o\n\n", ft_printf("|%1.5d|", nb));

	printf("%o\n", printf("|%10.5d|", nb));
	printf("%o\n\n", ft_printf("|%10.5d|", nb));

	printf("%o\n", printf("|%-10.5d|", nb));
	printf("%o\n\n", ft_printf("|%-10.5d|", nb));

	printf("%o\n", printf("|%-10.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%-10.5d|", neg_nb));

	printf("%o\n", printf("|% 10.5d|", nb));
	printf("%o\n\n", ft_printf("|% 10.5d|", nb));

	printf("%o\n", printf("|%010.5d|", nb));
	printf("%o\n\n", ft_printf("|%010.5d|", nb));

	printf("%o\n", printf("|%010.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%010.5d|", neg_nb));

	printf("%o\n", printf("|%+010.5d|", nb));
	printf("%o\n\n", ft_printf("|%+010.5d|", nb));

	printf("%o\n", printf("|%+010.5d|", neg_nb));
	printf("%o\n\n", ft_printf("|%+010.5d|", neg_nb));

	printf("%o\n", printf("|% 010.5d|", nb));
	printf("%o\n\n", ft_printf("|% 010.5d|", nb));
	/* Length modifiers */
	/* hh flag */
	printf("%o\n", printf("|%hhd|", char_min));
	printf("%o\n\n", ft_printf("|%hhd|", char_min));

	printf("%o\n", printf("|%hhd|", char_max));
	printf("%o\n\n", ft_printf("|%hhd|", char_max));
	/* h flag */
	printf("%o\n", printf("|%ho|", short_min));
	printf("%o\n\n", ft_printf("|%ho|", short_min));
	/* h */
	printf("%o\n", printf("|%ho|", short_max));
	printf("%o\n\n", ft_printf("|%ho|", short_max));
	/* h */
	printf("%o\n", printf("|%ho|", short_min));
	printf("%o\n\n", ft_printf("|%ho|", short_min));
	/* l */
	printf("%d\n", printf("|%lo|", long_min));	
	printf("%d\n\n", ft_printf("|%lo|", long_min));	

	// printf("%o\n", printf("|%lo|", long_min));
	// printf("%o\n\n", ft_printf("|%lo|", long_min));

	// printf("%o\n", printf("|%lo|", long_max));
	// printf("%o\n\n", ft_printf("|%lo|", long_max));

	// printf("%o\n", printf("|%llo|", LLONG_MIN));
	// printf("%o\n\n", ft_printf("|%llo|", LLONG_MIN));

	// printf("%o\n", printf("|%llo|", LLONG_MAX));
	// printf("%o\n\n", ft_printf("|%llo|", LLONG_MAX));
}

void	test_p()
{
	char *str = "Pointer tests";

	ft_printheader('c');
	 	char *ch = "c";
	 	int	tab[5] = {0, 1 ,2};

		printf("|%p|\n", str);
		ft_printf("|%p|\n\n", str);

		printf("|%p|\n", tab);
		ft_printf("|%p|\n\n", tab);

		printf("|%-p|\n", tab);
		ft_printf("|%-p|\n\n", tab);

		/* Undefined behavior */   
			//printf("|%+p|\n", tab);
			//ft_printf("|%+p|\n\n", tab);

			//printf("|% 10p|\n", tab);
			//ft_printf("|% 10p|\n\n", tab);

			//printf("|%0p|\n", tab);
			//ft_printf("|%0p|\n\n", tab);

			//printf("|%#p|\n", str);
			//ft_printf("|%#p|\n\n", str);

}

void	test_X()
{
	/* %X */
	ft_printheader('X');

		printf("|%X|\n", 0);
		ft_printf("|%X|\n\n", 0);

		printf("|%X|\n", 17);
		ft_printf("|%X|\n\n", 17);

		printf("|%X|\n", 123);
		ft_printf("|%X|\n\n", 123);

		printf("|%X|\n", 9321124);
		ft_printf("|%X|\n\n", 9321124);

		/* # flag */
		printf("|%#X|\n", 9321124);
		ft_printf("|%#X|\n\n", 9321124);

		printf("|%#X|\n", 9321124);
		ft_printf("|%#X|\n\n", 9321124);

		printf("|%010X|\n", 9321124);
		ft_printf("|%010X|\n\n", 9321124);

		printf("|%#010X|\n", 9321124);
		ft_printf("|%#010X|\n\n", 9321124);

}

void	test_x()
{
	/* %x */
	ft_printheader('x');

		 	printf("|%x|\n", 0);
		 	ft_printf("|%x|\n\n", 0);

		 	printf("|%x|\n", 17);
		 	ft_printf("|%x|\n\n", 17);

		 	printf("|%x|\n", 123);
		 	ft_printf("|%x|\n\n", 123);

		 	printf("|%x|\n", 9321124);
		 	ft_printf("|%x|\n\n", 9321124);

			/* # flag */
		 	printf("|%#x|\n", 9321124);
		 	ft_printf("|%#x|\n\n", 9321124);

		 	printf("|%#0x|\n", 9321124);
		 	ft_printf("|%#0x|\n\n", 9321124);

		 	printf("|%#015x|\n", 9321124);
		 	ft_printf("|%#015x|\n\n", 9321124);

			/* - flag */
		 		//printf("|%-015x|\n", 9321124);
		 		//ft_printf("|%-015x|\n\n", 9321124);

		 	printf("|%-15x|\n", 9321124);
		 	ft_printf("|%-15x|\n\n", 9321124);

			/* Undefined behavior */
				//printf("|%+15x|\n", 9321124);
				//ft_printf("|%+15x|\n\n", 9321124);
				
		 		//printf("|%+#015x|\n", 9321124);
}

int	main(void)
{
	test_c();
	// test_d();
	// test_s();
	//test_u();
	// test_i();
	test_o();
	//test_p();
	//test_X();
	//test_x();
}