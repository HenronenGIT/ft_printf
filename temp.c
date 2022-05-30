void	test_o()
{
	int		nb;
	int		neg_nb;
	int		int_max;
	int		int_min;
	unsigned int	uint_min;
	unsigned int	uint_max;
	long	long_min;
	long	long_max;
	short	short_min;
	short	short_max;
	char	char_min;
	char	char_max;

	neg_nb = -42;
	nb = 42;
	short_max = SHRT_MAX;
	short_min = SHRT_MIN;
	long_min = LONG_MAX;
	long_max = LONG_MIN;
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

	printf("%o\n", printf("|%lo|", long_min));
	printf("%o\n\n", ft_printf("|%lo|", long_min));

		printf("%o\n", printf("|%lo|", long_max));
		printf("%o\n\n", ft_printf("|%lo|", long_max));
}
