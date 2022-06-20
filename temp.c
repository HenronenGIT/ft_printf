	printf("%d\n", printf("|%X|", 0));
	printf("%d\n\n", ft_printf("|%X|", 0));

	printf("%d\n", printf("|%X|", 9321124));
	printf("%d\n\n", ft_printf("|%X|", 9321124));

	printf("%d\n", printf("|%X|", int_min));
	printf("%d\n\n", ft_printf("|%X|", int_min));

	printf("%d\n", printf("|%X|", int_maX));
	printf("%d\n\n", ft_printf("|%X|", int_maX));

	printf("%d\n", printf("|%X|", uint_min));
	printf("%d\n\n", ft_printf("|%X|", uint_min));

	printf("%d\n", printf("|%X|", uint_maX));
	printf("%d\n\n", ft_printf("|%X|", uint_maX));

	/* Length modifiers */

	printf("%d\n", printf("|%hX|", short_min));
	printf("%d\n\n", ft_printf("|%hX|", short_min));

	printf("%d\n", printf("|%hX|", short_maX));
	printf("%d\n\n", ft_printf("|%hX|", short_maX));

	printf("%d\n", printf("|%lX|", long_min));
	printf("%d\n\n", ft_printf("|%lX|", long_min));

	printf("%d\n", printf("|%lX|", long_maX));
	printf("%d\n\n", ft_printf("|%lX|", long_maX));

	printf("%d\n", printf("|%llX|", llong_min));
	printf("%d\n\n", ft_printf("|%llX|", llong_min));

	printf("%d\n", printf("|%llX|", llong_maX));
	printf("%d\n\n", ft_printf("|%llX|", llong_maX));

	printf("%d\n", printf("|%hX|", char_min));
	printf("%d\n\n", ft_printf("|%hX|", char_min));

	printf("%d\n", printf("|%hX|", char_maX));
	printf("%d\n\n", ft_printf("|%hX|", char_maX));

	printf("%d\n", printf("|%hX|", char_maX));
	printf("%d\n\n", ft_printf("|%hX|", char_maX));

	printf("%d\n", printf("|%hhX|", char_maX));
	printf("%d\n\n", ft_printf("|%hhX|", char_maX));

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
	// printf("%d\n", printf("|%-015X|", 9321124));
	// printf("%d\n", ft_printf("|%-015X|", 9321124));
 
	printf("%d\n", printf("|%-15X|", 9321124));
	printf("%d\n\n", ft_printf("|%-15X|", 9321124));

	printf("%d\n", printf("|%#15X|", 9321124));
	printf("%d\n\n", ft_printf("|%#15X|", 9321124));