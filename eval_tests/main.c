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

void	test_f();
void	test_percent();
void	test_d();
void	test_s();
void	test_c();
void	test_u();
void	test_i();
void	test_p();
void	test_x();
void	test_X();
void	test_o();

int	main(void)
{
	// test_f();
	// test_percent();
	// test_c();
	// test_d();
	// test_s();
	// test_u();
	// test_i();
	// test_o();
	// test_p();
	test_X();
	// test_x();
}

void	test_f()
{
	unsigned int	uint_min;
	unsigned int	uint_max;
	int				nb;
	int				neg_nb;
	int				int_max;
	int				int_min;
	long			long_min;
	long			long_max;
	long long		llong_min;
	long long		llong_max;
	double			double_nb;
	double			neg_double_nb;
	float			float_nb;

	nb = 42;
	neg_nb = -42;
	double_nb = 42.42;
	neg_double_nb = -42.42;
	float_nb = 42.42;
	int_max = INT_MAX;
	int_min = INT_MIN;
	uint_min = 0;
	uint_max = UINT_MAX;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;

	printf("%d\n", printf("|%f|", double_nb));
	printf("%d\n\n", ft_printf("%f", double_nb));

	printf("%d\n", printf("|%f|", neg_double_nb));
	printf("%d\n\n", ft_printf("%f", neg_double_nb));
}

void	test_percent()
{
	printf("%d\n", printf("|%%|"));
	printf("%d\n\n", ft_printf("|%%|"));

	printf("%d\n", printf("|%5%|"));
	printf("%d\n\n", ft_printf("|%5%|"));

	printf("%d\n", printf("|%-5%|"));
	printf("%d\n\n", ft_printf("|%-5%|"));

	printf("%d\n", printf("|%0.5%|"));
	printf("%d\n\n", ft_printf("|%0.5%|"));

	printf("%d\n", printf("|%.5%|"));
	printf("%d\n\n", ft_printf("|%.5%|"));

	printf("%d\n", printf("|%.0%|"));
	printf("%d\n\n", ft_printf("|%.0%|"));

	// printf("%d\n", printf("|%    %|", "test"));
	// printf("%d\n", ft_printf("|%    %|", "test"));

}

void	test_c()
{
	printf("%d\n", printf("||"));
	printf("%d\n\n", ft_printf("||"));

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

	/* Undefined */
	/* # flag */
		//printf("%d\n", printf("|%#c|", 'h'));
		//printf("%d\n\n", ft_printf("|%#c|", 'h'));
	/* Precision */
		//printf("%d\n", printf("|%010.0c|", 'h'));
		//printf("%d\n\n", ft_printf("|%010.0c|", 'h'));
	/* 0 flag */
		//printf("%d\n", printf("|%010c|", 'h'));
		//printf("%d\n\n", ft_printf("|%010c|", 'h'));
			// printf("|%+c|\n", 'h');
			// printf("|% c|\n", 'h');

}

void	test_u()
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
	long long		llong_min;
	long long		llong_max;

	neg_nb = -42;
	nb = 42;
	short_max = 32767;
	short_min = -32768;
	int_max = INT_MAX;
	int_min = INT_MIN;
	uint_min = 0;
	uint_max = UINT_MAX;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	ch = 'a';

	/* Without flags */
	printf("%u\n", printf("|Hello world %u|", nb));
	printf("%u\n\n", ft_printf("|Hello world %u|", nb));

	printf("%u\n", printf("|Hello world %u|", neg_nb));
	printf("%u\n\n", ft_printf("|Hello world %u|", neg_nb));
	/* Space flag */
	printf("%u\n", printf("|Hello world %10u|", nb));
	printf("%u\n\n", ft_printf("|Hello world %10u|", nb));

	printf("%u\n", printf("|Hello world %10u|", neg_nb));
	printf("%u\n\n", ft_printf("|Hello world %10u|", neg_nb));

	/* 0 flag */
	printf("%u\n", printf("|Hello world %010u|", nb));
	printf("%u\n\n", ft_printf("|Hello world %010u|", nb));

	printf("%u\n", printf("|Hello world %010u|", neg_nb));
	printf("%u\n\n", ft_printf("|Hello world %010u|", neg_nb));

	printf("%u\n", printf("|Hello world %0u|", nb));
	printf("%u\n\n", ft_printf("|Hello world %0u|", nb));

	/* - flag */
	printf("%u\n", printf("|Hello world %-10u|", nb));
	printf("%u\n\n", ft_printf("|Hello world %-10u|", nb));

	printf("%u\n", printf("|Hello world %-10u|", neg_nb));
	printf("%u\n\n", ft_printf("|Hello world %-10u|", neg_nb));
		 
	// /* Precision */
	printf("#### Precision ####\n");
	printf("%u\n", printf("|%.5u|", nb));
	printf("%u\n\n", ft_printf("|%.5u|", nb));

	printf("%u\n", printf("|%.5u|", neg_nb));
	printf("%u\n\n", ft_printf("|%.5u|", neg_nb));

	printf("%u\n", printf("|%-.5u|", nb));
	printf("%u\n\n", ft_printf("|%-.5u|", nb));


	printf("%u\n", printf("|%-.5u|", neg_nb));
	printf("%u\n\n", ft_printf("|%-.5u|", neg_nb));

	printf("%u\n", printf("|%.u|", nb));
	printf("%u\n\n", ft_printf("|%.u|", nb));

	printf("%u\n", printf("|%5.u|", nb));
	printf("%u\n\n", ft_printf("|%5.u|", nb));

	printf("%u\n", printf("|%5.5u|", nb));
	printf("%u\n\n", ft_printf("|%5.5u|", nb));

	printf("%u\n", printf("|%1.5u|", nb));
	printf("%u\n\n", ft_printf("|%1.5u|", nb));

	printf("%u\n", printf("|%10.5u|", nb));
	printf("%u\n\n", ft_printf("|%10.5u|", nb));

	printf("%u\n", printf("|%-10.5u|", nb));
	printf("%u\n\n", ft_printf("|%-10.5u|", nb));

	printf("%u\n", printf("|%-10.5u|", neg_nb));
	printf("%u\n\n", ft_printf("|%-10.5u|", neg_nb));

	printf("%u\n", printf("|%010.5u|", nb));
	printf("%u\n\n", ft_printf("|%010.5u|", nb));

	printf("%u\n", printf("|%010.5u|", neg_nb));
	printf("%u\n", ft_printf("|%010.5u|", neg_nb));

	/* Length modifiers */
	/* hh flag */
	printf("%u\n", printf("|%hhu|", ch));
	printf("%u\n\n", ft_printf("|%hhu|", ch));

	printf("%u\n", printf("|%hhu|", char_min));
	printf("%u\n\n", ft_printf("|%hhu|", char_min));

	printf("%u\n", printf("|%hhu|", char_max));
	printf("%u\n\n", ft_printf("|%hhu|", char_max));
	/* h flag */
	printf("%u\n", printf("|%hu|", short_min));
	printf("%u\n\n", ft_printf("|%hu|", short_min));
 
	printf("%u\n", printf("|%hu|", short_max));
	printf("%u\n\n", ft_printf("|%hu|", short_max));
 
	printf("%u\n", printf("|%hu|", short_min));
	printf("%u\n\n", ft_printf("|%hu|", short_min));

	printf("%u\n", printf("|%lu|", long_min));
	printf("%u\n\n", ft_printf("|%lu|", long_min));

	printf("%u\n", printf("|%lu|", long_max));
	printf("%u\n\n", ft_printf("|%lu|", long_max));

	printf("%u\n", printf("|%llu|", llong_max));
	printf("%u\n\n", ft_printf("|%llu|", llong_max));

	printf("%u\n", printf("|%llu|", llong_min));
	printf("%u\n\n", ft_printf("|%llu|", llong_min));

	/*42 filechecker */




	/* Undefined behavior */

	//printf("%u\n", printf("|% u|", 4294967295));
	//printf("%u\n\n", ft_printf("|% u|", 4294967295));

	// printf("%u\n", printf("%+u", 4294967295));
	// printf("%u\n\n", ft_printf("%+u", 4294967295));
	
	//printf("%u\n", printf("|%+.5u|", nb));
	//printf("%u\n\n", ft_printf("|%+.5u|", nb));

	//printf("%u\n", printf("|%+.5u|", neg_nb));
	//printf("%u\n\n", ft_printf("|%+.5u|", neg_nb));

	//printf("%u\n", printf("|% 10.5u|", nb));
	//printf("%u\n\n", ft_printf("|% 10.5u|", nb));

	//printf("%u\n", printf("|%+010.5u|", nb));
	//printf("%u\n\n", ft_printf("|%+010.5u|", nb));

	//printf("%u\n", printf("|%+010.5u|", neg_nb));
	//printf("%u\n\n", ft_printf("|%+010.5u|", neg_nb));

	//printf("%u\n", printf("|% 010.5u|", nb));
	//printf("%u\n\n", ft_printf("|% 010.5u|", nb));

	//printf("%u\n", printf("|Hello world % 10u|", nb));
	//printf("%u\n\n", ft_printf("|Hello world % 10u|", nb));

	//printf("%u\n", printf("|Hello world % 10u|", neg_nb));
	//printf("%u\n\n", ft_printf("|Hello world % 10u|", neg_nb));

	//printf("%u\n", printf("|Hello world %+010u|", nb));
	//printf("%u\n\n", ft_printf("|Hello world %+010u|", nb));

	//printf("%u\n", printf("|negative number %+010u|", neg_nb));
	//printf("%u\n\n", ft_printf("|negative number %+010u|", neg_nb));
	/* Zero and Space */
	//printf("%u\n", printf("|Hello world %0 10u|", nb));
	//printf("%u\n\n", ft_printf("|Hello world %0 10u|", nb));

	//printf("%u\n", printf("|Hello world %0 10u|", neg_nb));
	//printf("%u\n\n", ft_printf("|Hello world %0 10u|", neg_nb));

	//printf("%u\n", printf("|Hello world % 010u|", nb));
	//printf("%u\n\n", ft_printf("|Hello world % 010u|", nb));

	//printf("%u\n", printf("|Hello world %0 10u|", neg_nb));
	//printf("%u\n\n", ft_printf("|Hello world %0 10u|", neg_nb));

	//printf("%u\n", printf("|Hello world %-+10u|", nb));
	//printf("%u\n\n", printf("|Hello world %-+10u|", nb));

	//printf("%u\n", printf("|Hello world %-+10u|", neg_nb));
	//printf("%u\n\n", printf("|Hello world %-+10u|", neg_nb));

	//printf("%u\n", printf("|Decimal test%+-10u|", nb));
	//printf("%u\n\n", ft_printf("|Decimal test%+-10u|", nb));

	//printf("%u\n", printf("|Decimal test%+-10u|", neg_nb));
	//printf("%u\n\n", ft_printf("|Decimal test%+-10u|", neg_nb));
}

void	test_i()
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
	long long		llong_min;
	long long		llong_max;

	neg_nb = -42;
	nb = 42;
	short_max = 32767;
	short_min = -32768;
	int_max = INT_MAX;
	int_min = INT_MIN;
	uint_min = 0;
	uint_max = UINT_MAX;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	ch = 'a';
	
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
	printf("%i\n\n", ft_printf("|%hi|", short_min));

	printf("%i\n", printf("|%hi|", short_max));
	printf("%i\n\n", ft_printf("|%hi|", short_max));
	/* l */
	printf("%i\n", printf("|%li|", long_min));
	printf("%i\n\n", ft_printf("|%li|", long_min));

	printf("%i\n", printf("|%li|", long_max));
	printf("%i\n\n", ft_printf("|%li|", long_max));
	/* ll */
	printf("%i\n", printf("|%lli|", llong_min));
	printf("%i\n\n", ft_printf("|%lli|", llong_min));

	printf("%i\n", printf("|%lli|", llong_max));
	printf("%i\n\n", ft_printf("|%lli|", llong_max));

	printf("%i\n", printf("|Hello world %i|", nb));
	printf("%i\n\n", ft_printf("|Hello world %i|", nb));

	printf("%i\n", printf("|Hello world %i|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %i|", neg_nb));
	/* Space flag */
	printf("%i\n", printf("|Hello world %10d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %10d|", nb));

	printf("%i\n", printf("|Hello world %10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %10d|", neg_nb));

	printf("%i\n", printf("|Hello world % 10d|", nb));
	printf("%i\n\n", ft_printf("|Hello world % 10d|", nb));

	printf("%i\n", printf("|Hello world % 10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world % 10d|", neg_nb));
	// /* 0 flag */
	printf("%i\n", printf("|Hello world %010d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %010d|", nb));

	printf("%i\n", printf("|Hello world %010d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %010d|", neg_nb));

	printf("%i\n", printf("|Hello world %0d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %0d|", nb));

	printf("%i\n", printf("|Hello world %+010d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %+010d|", nb));

	printf("%i\n", printf("|Hello world %+010d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %+010d|", neg_nb));
	// /* Zero and Space */
	printf("%i\n", printf("|Hello world %0 10d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %0 10d|", nb));

	printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	printf("%i\n", printf("|Hello world % 010d|", nb));
	printf("%i\n\n", ft_printf("|Hello world % 010d|", nb));

	printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %0 10d|", neg_nb));

	// /* - flag */
	printf("%i\n", printf("|Hello world %-10d|", nb));
	printf("%i\n\n", ft_printf("|Hello world %-10d|", nb));

	printf("%i\n", printf("|Hello world %-10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Hello world %-10d|", neg_nb));

	printf("%i\n", printf("|Hello world %-+10d|", nb));
	printf("%i\n\n", printf("|Hello world %-+10d|", nb));

	printf("%i\n", printf("|Hello world %-+10d|", neg_nb));
	printf("%i\n\n", printf("|Hello world %-+10d|", neg_nb));

	printf("%i\n", printf("|Decimal test%+-10d|", nb));
	printf("%i\n\n", ft_printf("|Decimal test%+-10d|", nb));

	printf("%i\n", printf("|Decimal test%+-10d|", neg_nb));
	printf("%i\n\n", ft_printf("|Decimal test%+-10d|", neg_nb));
		 
	// // /* Precision */
	printf("#### Precision ####\n");
	printf("%i\n", printf("|%.5d|", nb));
	printf("%i\n\n", ft_printf("|%.5d|", nb));

	printf("%i\n", printf("|%.5d|", neg_nb));
	printf("%i\n\n", ft_printf("|%.5d|", neg_nb));

	printf("%i\n", printf("|%-.5d|", nb));
	printf("%i\n\n", ft_printf("|%-.5d|", nb));

	printf("%i\n", printf("|%-.5d|", neg_nb));
	printf("%i\n\n", ft_printf("|%-.5d|", neg_nb));

	printf("%i\n", printf("|%+.5d|", nb));
	printf("%i\n\n", ft_printf("|%+.5d|", nb));

	printf("%i\n", printf("|%+.5d|", neg_nb));
	printf("%i\n\n", ft_printf("|%+.5d|", neg_nb));

	printf("%i\n", printf("|%.d|", nb));
	printf("%i\n\n", ft_printf("|%.d|", nb));
	// 		// Not sure
	// 		// printf("%i\n", printf("|%.-5d|", nb));
	// 		// printf("%i\n\n", ft_printf("|%.-5d|", nb));
	printf("%i\n", printf("|%5.d|", nb));
	printf("%i\n\n", ft_printf("|%5.d|", nb));

	printf("%i\n", printf("|%5.5d|", nb));
	printf("%i\n\n", ft_printf("|%5.5d|", nb));

	printf("%i\n", printf("|%1.5d|", nb));
	printf("%i\n\n", ft_printf("|%1.5d|", nb));

	printf("%i\n", printf("|%10.5d|", nb));
	printf("%i\n\n", ft_printf("|%10.5d|", nb));

	printf("%i\n", printf("|%-10.5d|", nb));
	printf("%i\n\n", ft_printf("|%-10.5d|", nb));

	printf("%i\n", printf("|%-10.5d|", neg_nb));
	printf("%i\n\n", ft_printf("|%-10.5d|", neg_nb));

	printf("%i\n", printf("|% 10.5d|", nb));
	printf("%i\n\n", ft_printf("|% 10.5d|", nb));

	printf("%i\n", printf("|%010.5d|", nb));
	printf("%i\n\n", ft_printf("|%010.5d|", nb));

		printf("%i\n", printf("|%010.5d|", neg_nb));
		printf("%i\n\n", ft_printf("|%010.5d|", neg_nb));

		printf("%i\n", printf("|%+010.5d|", nb));
		printf("%i\n\n", ft_printf("|%+010.5d|", nb));

		printf("%i\n", printf("|%+010.5d|", neg_nb));
		printf("%i\n\n", ft_printf("|%+010.5d|", neg_nb));

		printf("%i\n", printf("|% 010.5d|", nb));
		printf("%i\n\n", ft_printf("|% 010.5d|", nb));
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
	short_max = 32767;
	short_min = -32768;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;

	printf("%d\n", printf("|Hello world %o|", nb));
	printf("%d\n\n", ft_printf("|Hello world %o|", nb));

	printf("%d\n", printf("|Hello world %o|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %o|", neg_nb));
	/* Space flag */
	printf("%d\n", printf("|Hello world %10o|", nb));
	printf("%d\n\n", ft_printf("|Hello world %10o|", nb));

	printf("%d\n", printf("|Hello world %10o|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %10o|", neg_nb));

	/* 0 flag */
	printf("%d\n", printf("|Hello world %010o|", nb));
	printf("%d\n\n", ft_printf("|Hello world %010o|", nb));

	printf("%d\n", printf("|Hello world %010o|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %010o|", neg_nb));

	printf("%d\n", printf("|Hello world %0o|", nb));
	printf("%d\n\n", ft_printf("|Hello world %0o|", nb));

	/* - flag */
	printf("%d\n", printf("|Hello world %-10o|", nb));
	printf("%d\n\n", ft_printf("|Hello world %-10o|", nb));

	printf("%d\n", printf("|Hello world %-10o|", neg_nb));
	printf("%d\n\n", ft_printf("|Hello world %-10o|", neg_nb));
		 
	// /* Precision */
	printf("#### Precision ####\n");
	printf("%d\n", printf("|%.5o|", nb));
	printf("%d\n\n", ft_printf("|%.5o|", nb));

	printf("%d\n", printf("|%.5o|", neg_nb));
	printf("%d\n\n", ft_printf("|%.5o|", neg_nb));

	printf("%d\n", printf("|%-.5o|", nb));
	printf("%d\n\n", ft_printf("|%-.5o|", nb));

	printf("%d\n", printf("|%-.5o|", neg_nb));
	printf("%d\n\n", ft_printf("|%-.5o|", neg_nb));

	printf("%d\n", printf("|%.o|", nb));
	printf("%d\n\n", ft_printf("|%.o|", nb));
			// Not sure
			// printf("%o\n", printf("|%.-5d|", nb));
			// printf("%o\n\n", ft_printf("|%.-5d|", nb));
	printf("%d\n", printf("|%5.o|", nb));
	printf("%d\n\n", ft_printf("|%5.o|", nb));
		//
	printf("%d\n", printf("|%5.5o|", nb));
	printf("%d\n\n", ft_printf("|%5.5o|", nb));

	printf("%d\n", printf("|%1.5o|", nb));
	printf("%d\n\n", ft_printf("|%1.5o|", nb));

	printf("%d\n", printf("|%10.5o|", nb));
	printf("%d\n\n", ft_printf("|%10.5o|", nb));

	printf("%d\n", printf("|%-10.5o|", nb));
	printf("%d\n\n", ft_printf("|%-10.5o|", nb));

	printf("%d\n", printf("|%-10.5o|", neg_nb));
	printf("%d\n\n", ft_printf("|%-10.5o|", neg_nb));

	printf("%d\n", printf("|%010.5o|", nb));
	printf("%d\n\n", ft_printf("|%010.5o|", nb));

	printf("%d\n", printf("|%010.5o|", neg_nb));
	printf("%d\n\n", ft_printf("|%010.5o|", neg_nb));

	/* # flag */

	printf("%d\n", printf("|%#o|", nb));
	printf("%d\n\n", ft_printf("|%#o|", nb));

	printf("%d\n", printf("|%#o|", nb));
	printf("%d\n\n", ft_printf("|%#o|", nb));

		printf("%d\n", printf("|%#o %#0o|", 0, 0));
		printf("%d\n\n", ft_printf("|%#o %#0o|", 0, 0));

	/* Length modifiers */
	/* hh */
	printf("%d\n", printf("|%hho|", char_min));
	printf("%d\n\n", ft_printf("|%hho|", char_min));

	printf("%o\n", printf("|%hho|", char_max));
	printf("%o\n\n", ft_printf("|%hho|", char_max));
	/* h */
	printf("%o\n", printf("|%ho|", short_min));
	printf("%o\n\n", ft_printf("|%ho|", short_min));
	/* h */
	printf("%o\n", printf("|%ho|", short_max));
	printf("%o\n\n", ft_printf("|%ho|", short_max));
	/* l */
	printf("%d\n", printf("|%lo|", long_min));
	printf("%d\n\n", ft_printf("|%lo|", long_min));

	printf("%d\n", printf("|%lo|", long_max));
	printf("%d\n\n", ft_printf("|%lo|", long_max));
	/* ll */
	printf("%d\n", printf("|%llo|", llong_min));
	printf("%d\n\n", ft_printf("|%llo|", llong_min));

	printf("%d\n", printf("|%llo|", llong_max));
	printf("%d\n\n", ft_printf("|%llo|", llong_max));

	/*42FileChecker */

		printf("%d\n", printf("|@moulitest: %#.o %#.0o|", 0, 0));
		printf("%d\n\n", ft_printf("|@moulitest: %#.o %#.0o|", 0, 0));

		printf("%d\n", printf("|@moulitest: %.o %.0o|", 0, 0));
		printf("%d\n\n", ft_printf("|@moulitest: %.o %.0o|", 0, 0));


	/* Undefined behavior */
	//printf("%d\n", printf("|Hello world % 10o|", nb));
	//printf("%d\n\n", ft_printf("|Hello world % 10o|", nb));

	//printf("%d\n", printf("|Hello world % 10o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Hello world % 10o|", neg_nb));

	//printf("%d\n", printf("|Hello world %+010o|", nb));
	//printf("%d\n\n", ft_printf("|Hello world %+010o|", nb));

	//printf("%d\n", printf("|Hello world %+010o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Hello world %+010o|", neg_nb));
	//printf("%d\n", printf("|Hello world %0 10o|", nb));
	//printf("%d\n\n", ft_printf("|Hello world %0 10o|", nb));

	//printf("%d\n", printf("|Hello world %0 10o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Hello world %0 10o|", neg_nb));

	//printf("%d\n", printf("|Hello world % 010o|", nb));
	//printf("%d\n\n", ft_printf("|Hello world % 010o|", nb));

	//printf("%d\n", printf("|Hello world %0 10o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Hello world %0 10o|", neg_nb));

	//printf("%d\n", printf("|Hello world %-+10o|", nb));
	//printf("%d\n\n", ft_printf("|Hello world %-+10o|", nb));

	//printf("%d\n", printf("|Hello world %-+10o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Hello world %-+10o|", neg_nb));

	//printf("%d\n", printf("|Decimal test%+-10o|", nb));
	//printf("%d\n\n", ft_printf("|Decimal test%+-10o|", nb));

	//printf("%d\n", printf("|Decimal test%+-10o|", neg_nb));
	//printf("%d\n\n", ft_printf("|Decimal test%+-10o|", neg_nb));

	//printf("%d\n", printf("|%+.5o|", nb));
	//printf("%d\n\n", ft_printf("|%+.5o|", nb));

	//printf("%d\n", printf("|%+.5o|", neg_nb));
	//printf("%d\n\n", ft_printf("|%+.5o|", neg_nb));

	//printf("%d\n", printf("|% 10.5o|", nb));
	//printf("%d\n\n", ft_printf("|% 10.5o|", nb));

	//printf("%d\n", printf("|%+010.5o|", nb));
	//printf("%d\n\n", ft_printf("|%+010.5o|", nb));

	//printf("%d\n", printf("|%+010.5o|", neg_nb));
	//printf("%d\n\n", ft_printf("|%+010.5o|", neg_nb));

	//printf("%d\n", printf("|% 010.5o|", nb));
	//printf("%d\n\n", ft_printf("|% 010.5o|", nb));
}

void	test_p()
{
	char *str = "Pointer tests";
	char *empty = NULL;

	char *ch = "c";
	int	tab[5] = {0, 1 ,2};

	printf("%d\n",printf("|%p|", empty));
	printf("%d\n\n",ft_printf("|%p|", empty));

	printf("%d\n",printf("|%p|", str));
	printf("%d\n\n",ft_printf("|%p|", str));

	printf("%d\n",printf("|%p|", tab));
	printf("%d\n\n",ft_printf("|%p|", tab));
	/* width flag */
	printf("%d\n",printf("|%10p|", empty));
	printf("%d\n\n",ft_printf("|%10p|", empty));

	printf("%d\n",printf("|%100p|", empty));
	printf("%d\n\n",ft_printf("|%100p|", empty));
	/* ' ' flag */
	printf("%d\n",printf("|% 10p|", empty));
	printf("%d\n\n",ft_printf("|% 10p|", empty));
	/* - flag */
	printf("%d\n", printf("|%-10p|", tab));
	printf("%d\n\n", ft_printf("|%-10p|", tab));

	printf("%d\n",printf("|%-010p|", empty));
	printf("%d\n\n",ft_printf("|%-010p|", empty));

	printf("%d\n",printf("|%- 010p|", empty));
	printf("%d\n\n",ft_printf("|%- 010p|", empty));


	/* Undefined behavior */
	/* +
	printf("%d\n",printf("|%+p|", empty));
	printf("%d\n\n",ft_printf("|%+p|", empty));
	*/
	/* Precision
	//printf("%d\n",printf("|%.0p|", empty));
	//printf("%d\n\n",ft_printf("|%.0p|", empty));
	*/
	/* 0 flag
	// printf("%d\n",printf("|%010p|", empty));
	// printf("%d\n\n",ft_printf("|%010p|", empty));
	*/
	/* # flag
	//printf("%d\n",printf("|%#p|", str));
	//printf("%d\n\n",ft_printf("|%#p|", str));
	*/
}

void	test_X()
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
	short_max = 32767;
	short_min = -32768;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;

	printf("%d\n", printf("|%X|", 42));
	printf("%d\n\n", ft_printf("|%X|", 42));

	printf("%d\n", printf("|%X|", 0));
	printf("%d\n\n", ft_printf("|%X|", 0));

	printf("%d\n", printf("|%X|", 9321124));
	printf("%d\n\n", ft_printf("|%X|", 9321124));

	printf("%d\n", printf("|%X|", int_min));
	printf("%d\n\n", ft_printf("|%X|", int_min));

	printf("%d\n", printf("|%X|", int_max));
	printf("%d\n\n", ft_printf("|%X|", int_max));

	printf("%d\n", printf("|%X|", uint_min));
	printf("%d\n\n", ft_printf("|%X|", uint_min));

	printf("%d\n", printf("|%X|", uint_max));
	printf("%d\n\n", ft_printf("|%X|", uint_max));
	/* Length modifiers */
	printf("%d\n", printf("|%hX|", short_min));
	printf("%d\n\n", ft_printf("|%hX|", short_min));

	printf("%d\n", printf("|%hX|", short_max));
	printf("%d\n\n", ft_printf("|%hX|", short_max));

	printf("%d\n", printf("|%lX|", long_min));
	printf("%d\n\n", ft_printf("|%lX|", long_min));

	printf("%d\n", printf("|%lX|", long_max));
	printf("%d\n\n", ft_printf("|%lX|", long_max));

	printf("%d\n", printf("|%llX|", llong_min));
	printf("%d\n\n", ft_printf("|%llX|", llong_min));

	printf("%d\n", printf("|%llX|", llong_max));
	printf("%d\n\n", ft_printf("|%llX|", llong_max));

	printf("%d\n", printf("|%hX|", char_min));
	printf("%d\n\n", ft_printf("|%hX|", char_min));

	printf("%d\n", printf("|%hX|", char_max));
	printf("%d\n\n", ft_printf("|%hX|", char_max));

	printf("%d\n", printf("|%hX|", char_max));
	printf("%d\n\n", ft_printf("|%hX|", char_max));

	printf("%d\n", printf("|%hhX|", char_max));
	printf("%d\n\n", ft_printf("|%hhX|", char_max));
	/* # flag */
	printf("%d\n", printf("|%#X|", 9321124));
	printf("%d\n\n", ft_printf("|%#X|", 9321124));
 
	printf("%d\n", printf("|%#0X|", 9321124));
	printf("%d\n\n", ft_printf("|%#0X|", 9321124));
 
	printf("%d\n", printf("|%#015X|", 9321124));
	printf("%d\n\n", ft_printf("|%#015X|", 9321124));
 
	printf("%d\n", printf("|%#-15X|", 9321124));
	printf("%d\n\n", ft_printf("|%#-15X|", 9321124));
 
	/* - flag */
	printf("%d\n", printf("|%-015X|", 9321124));
	printf("%d\n\n", ft_printf("|%-015X|", 9321124));
 
	printf("%d\n", printf("|%-15X|", 9321124));
	printf("%d\n\n", ft_printf("|%-15X|", 9321124));

	printf("%d\n", printf("|%#15X|", 9321124));
	printf("%d\n\n", ft_printf("|%#15X|", 9321124));

}

void	test_x()
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
	short_max = 32767;
	short_min = -32768;
	long_min = -2147483648;
	long_max = 2147483647;
	llong_min = -9223372036854775807;
	llong_max = 9223372036854775807;
	int_max = INT_MAX;
	int_min = INT_MIN;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	uint_min = 0;
	uint_max = UINT_MAX;

	printf("%d\n", printf("|%x|", 0));
	printf("%d\n\n", ft_printf("|%x|", 0));

	printf("%d\n", printf("|%x|", 9321124));
	printf("%d\n\n", ft_printf("|%x|", 9321124));

	printf("%d\n", printf("|%x|", int_min));
	printf("%d\n\n", ft_printf("|%x|", int_min));

	printf("%d\n", printf("|%x|", int_max));
	printf("%d\n\n", ft_printf("|%x|", int_max));

	printf("%d\n", printf("|%x|", uint_min));
	printf("%d\n\n", ft_printf("|%x|", uint_min));

	printf("%d\n", printf("|%x|", uint_max));
	printf("%d\n\n", ft_printf("|%x|", uint_max));

	/* Length modifiers */

	printf("%d\n", printf("|%hx|", short_min));
	printf("%d\n\n", ft_printf("|%hx|", short_min));

	printf("%d\n", printf("|%hx|", short_max));
	printf("%d\n\n", ft_printf("|%hx|", short_max));

	printf("%d\n", printf("|%lx|", long_min));
	printf("%d\n\n", ft_printf("|%lx|", long_min));

	printf("%d\n", printf("|%lx|", long_max));
	printf("%d\n\n", ft_printf("|%lx|", long_max));

	printf("%d\n", printf("|%llx|", llong_min));
	printf("%d\n\n", ft_printf("|%llx|", llong_min));

	printf("%d\n", printf("|%llx|", llong_max));
	printf("%d\n\n", ft_printf("|%llx|", llong_max));

	printf("%d\n", printf("|%hx|", char_min));
	printf("%d\n\n", ft_printf("|%hx|", char_min));

	printf("%d\n", printf("|%hx|", char_max));
	printf("%d\n\n", ft_printf("|%hx|", char_max));

	printf("%d\n", printf("|%hx|", char_max));
	printf("%d\n\n", ft_printf("|%hx|", char_max));

	printf("%d\n", printf("|%hhx|", char_max));
	printf("%d\n\n", ft_printf("|%hhx|", char_max));

	/* # flag */

	printf("%d %%#x 0\n", printf("|%#x|", 0));
	printf("%d %%#x 0\n\n", ft_printf("|%#x|", 0));
	
	printf("%d\n", printf("|%#x|", 9321124));
	printf("%d\n\n", ft_printf("|%#x|", 9321124));
 
	printf("%d\n", printf("|%#0x|", 9321124));
	printf("%d\n\n", ft_printf("|%#0x|", 9321124));
 
	printf("%d\n", printf("|%#015x|", 9321124));
	printf("%d\n\n", ft_printf("|%#015x|", 9321124));
 
	printf("%d\n", printf("|%#-15x|", 9321124));
	printf("%d\n\n", ft_printf("|%#-15x|", 9321124));
 
	/* - flag */
	// printf("%d\n", printf("|%-015x|", 9321124));
	// printf("%d\n", ft_printf("|%-015x|", 9321124));
 
	printf("%d\n", printf("|%-15x|", 9321124));
	printf("%d\n\n", ft_printf("|%-15x|", 9321124));

	printf("%d\n", printf("|%#15x|", 9321124));
	printf("%d\n\n", ft_printf("|%#15x|", 9321124));

	/* 42FileChecker */

	printf("%d\n", printf("|%.x %.0x|", 0, 0));
	printf("%d\n\n", ft_printf("|%.x %.0x|", 0, 0));

	printf("%d\n", printf("|%#.x %#.0x|", 0, 0));
	printf("%d\n\n", ft_printf("|%#.x %#.0x|", 0, 0));

	printf("%d\n", printf("|%5.2x|", 5427));
	printf("%d\n\n", ft_printf("|%5.2x|", 5427));

	printf("%d %%#x\n", printf("|%#x|", 0));
	printf("%d %%#x\n\n", ft_printf("|%#x|", 0));


	
	/* Undefined behavior */

	/* ' ' flag */
		// printf("%d\n", printf("|% 15x|", 9321124));
	//printf("|%+15x|\n", 9321124);
	//printf("|%+#015x|\n", 9321124);
}

