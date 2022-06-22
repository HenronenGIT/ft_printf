#include "ft_printf.h"
#include <limits.h>

void	test_d()
{
	unsigned int	uint_min;
	unsigned int	uint_max;
	int				nb;
	int				neg_nb;
	int				int_max;
	int				int_min;
	long			long_min;
	long			long_max;
	short			short_min;
	short			short_max;
	char			char_min;
	char			char_max;
	char			ch;
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
		 
	/* Precision */
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

	printf("%d\n", printf("|%lld|", llong_max));
	printf("%d\n\n", ft_printf("|%lld|", llong_max));

	printf("%d\n", printf("|%lld|", llong_min));
	printf("%d\n\n", ft_printf("|%lld|", llong_min));

	/* 42FileChecker */

	printf("%d\n", printf("|@moulitest: %.d %.0d|", 42, 43));
	printf("%d\n\n", ft_printf("|@moulitest: %.d %.0d|", 42, 43));

	printf("%d\n", printf("|%-05d|", -42));
	printf("%d\n\n", ft_printf("|%-05d|", -42));

	printf("%d\n", printf("|%++ d|", 42));
	printf("%d\n\n", ft_printf("|%++ d|", 42));

	printf("%d\n", printf("|% ++d|", 42));
	printf("%d\n\n", ft_printf("|% ++d|", 42));

	printf("%d\n", printf("|@moulitest: %.d %.0d|", 0, 0));
	printf("%d\n\n", ft_printf("|@moulitest: %.d %.0d|", 0, 0));

	/* Undefined behavior */
	//printf("|Hello world %#d|\n", nb);
	//ft_printf("|Hello world %#d|\n\n", nb);
}
