#include "ft_printf.h"
#include <limits.h>

void	test_s()
{
	char *str = "String!";

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

	/* 42FileChecker */

	printf("%d\n", printf("|%s %s|", NULL, str));
	printf("%d\n\n", ft_printf("|%s %s|", NULL, str));

	printf("%d\n", printf("|%s|", NULL));
	printf("%d\n\n", ft_printf("|%s|", NULL));

	printf("%d\n", printf("|%-5.2s is a string|", ""));
	printf("%d\n\n", ft_printf("|%-5.2s is a string|", ""));

	printf("%d\n", printf("|%-.2s is a string|", ""));
	printf("%d\n\n", ft_printf("|%-.2s is a string|", ""));

	printf("%d\n", printf("|%5.2s is a string|", ""));
	printf("%d\n\n", ft_printf("|%5.2s is a string|", ""));

	printf("%d\n", printf("%.2s is a string", ""));
	printf("%d\n\n", ft_printf("%.2s is a string", ""));

	/* Undefined behavior */
	/* 0 flag */
	// printf("%d\n", printf("|Hive %010.0s|", "hello"));
	// printf("%d\n", printf("|Hive %010s|", "hello"));
	/* # flag */
	// printf("%d\n", printf("|Hive %#010s|", "hello"));
	//printf("%d\n", printf("|Hive %hhs|", str));
	// printf("%d\n", printf("|Hive %hs|", str));
	//printf("%d\n", printf("|Hive %lls|", str));
	//printf("%d\n", printf("|Hive % 10s|", str));
	//printf("|Hive %010s|\n", str);

}