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
void	test_o();

int	main(void)
{
	FILE *printf_file;
	FILE *ft_printf_file;

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
	double			neg_double_nb;
	double			double_nb;

	/* Pointer variables */
	char *empty = NULL;
	int	tab[5] = {0, 1 ,2};
	/* Pointer variables */

	char *str = "String!";
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

	neg_nb = -42;
	double_nb = 42.42;


	if((printf_file=freopen("printf.txt", "w" ,stdout)) == NULL)
	{
		printf("Cannot open printf.txt.\n");
		exit(1);
	}
	printf("====== c Specifier ======\n");
	printf("%d\n", printf("|%c|", 'h'));
	printf("%d\n", printf("|%10c|", 'h'));
	printf("%d\n", printf("|%10c|", 'h'));
	printf("%d\n", printf("|%123c|", 'h'));
	printf("%d\n", printf("|%10c%10c|", 'h', 'e'));
	printf("%d\n", printf("|%-10c|", 'h'));
	printf("%d\n", printf("|%1c|", 'h'));
	printf("%d\n", printf("|%c|", 'h'));
	printf("====== s specifier ======\n");
	printf("%d\n", printf("|Hive %s|", str));
	printf("%d\n", printf("|Hive %20s|", str));
	printf("%d\n", printf("|Hive %-20s|", str));
	printf("%d\n", printf("|Hive %-5s %s|", str, str));
	printf("%d\n", printf("|Hive %10.s|", str));
	printf("%d\n", printf("|Hive %10.5s|", str));
	printf("%d\n", printf("|Hive %.s|", str));
	printf("%d\n", printf("|%s %s|", NULL, str));
	printf("%d\n", printf("|%s|", NULL));
	printf("%d\n", printf("|%-5.2s is a string|", ""));
	printf("%d\n", printf("|%-.2s is a string|", ""));
	printf("%d\n", printf("|%.2s is a string|", ""));
	printf("%d\n", printf("|%5.2s is a string|", ""));
	printf("====== d specifier ======\n");
	printf("%d\n", printf("|Hello world %d|", nb));
	printf("%d\n", printf("|Hello world %d|", neg_nb));
	/* Space flag */
	printf("%d\n", printf("|Hello world %10d|", nb));
	printf("%d\n", printf("|Hello world %10d|", neg_nb));
	printf("%d\n", printf("|Hello world % 10d|", nb));
	printf("%d\n", printf("|Hello world % 10d|", neg_nb));
	/* 0 flag */
	printf("%d\n", printf("|Hello world %010d|", nb));
	printf("%d\n", printf("|Hello world %010d|", neg_nb));
	printf("%d\n", printf("|Hello world %0d|", nb));
	printf("%d\n", printf("|Hello world %+010d|", nb));
	printf("%d\n", printf("|Hello world %+010d|", neg_nb));
	/* Zero and Space */
	printf("%d\n", printf("|Hello world %0 10d|", nb));
	printf("%d\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%d\n", printf("|Hello world % 010d|", nb));
	printf("%d\n", printf("|Hello world %0 10d|", neg_nb));
	/* - flag */
	printf("%d\n", printf("|Hello world %-10d|", nb));
	printf("%d\n", printf("|Hello world %-10d|", neg_nb));
	printf("%d\n", printf("|Hello world %-+10d|", nb));
	printf("%d\n", printf("|Hello world %-+10d|", neg_nb));
	printf("%d\n", printf("|Decimal test%+-10d|", nb));
	printf("%d\n", printf("|Decimal test%+-10d|", neg_nb));
	/* Precision */
	printf("%d\n", printf("|%.5d|", nb));
	printf("%d\n", printf("|%.5d|", neg_nb));
	printf("%d\n", printf("|%-.5d|", nb));
	printf("%d\n", printf("|%-.5d|", neg_nb));
	printf("%d\n", printf("|%+.5d|", nb));
	printf("%d\n", printf("|%+.5d|", neg_nb));
	printf("%d\n", printf("|%.d|", nb));
	printf("%d\n", printf("|%5.d|", nb));
	printf("%d\n", printf("|%5.5d|", nb));
	printf("%d\n", printf("|%1.5d|", nb));
	printf("%d\n", printf("|%10.5d|", nb));
	printf("%d\n", printf("|%-10.5d|", nb));
	printf("%d\n", printf("|%-10.5d|", neg_nb));
	printf("%d\n", printf("|% 10.5d|", nb));
	printf("%d\n", printf("|%010.5d|", nb));
	printf("%d\n", printf("|%010.5d|", neg_nb));
	printf("%d\n", printf("|%+010.5d|", nb));
	printf("%d\n", printf("|%+010.5d|", neg_nb));
	printf("%d\n", printf("|% 010.5d|", nb));
	/* Length modifiers */
	printf("%d\n", printf("|%hhd|", ch));
	printf("%d\n", printf("|%hhd|", char_min));
	printf("%d\n", printf("|%hhd|", char_max));
	printf("%d\n", printf("|%hd|", short_min));
	printf("%d\n", printf("|%hd|", short_max));
	printf("%d\n", printf("|%hd|", short_min));
	printf("%d\n", printf("|%ld|", long_min));
	printf("%d\n", printf("|%lld|", llong_max));
	printf("%d\n", printf("|%lld|", llong_min));
	printf("%d\n", printf("|%.d %.0d|", 42, 43));
	printf("%d\n", printf("|%-05d|", -42));
	printf("%d\n", printf("|%++ d|", 42));
	printf("%d\n", printf("|% ++d|", 42));
	printf("%d\n", printf("|%.d %.0d|", 0, 0));
	printf("%d\n", printf("|%lld|", -9223372036854775808));
	printf("====== u specifier ======\n");
	/* Without flags */
	printf("%u\n", printf("|Hello world %u|", nb));
	printf("%u\n", printf("|Hello world %u|", neg_nb));
	/* Space flag */
	printf("%u\n", printf("|Hello world %10u|", nb));
	printf("%u\n", printf("|Hello world %10u|", neg_nb));
	/* 0 flag */
	printf("%u\n", printf("|Hello world %010u|", nb));
	printf("%u\n", printf("|Hello world %010u|", neg_nb));
	printf("%u\n", printf("|Hello world %0u|", nb));
	/* - flag */
	printf("%u\n", printf("|Hello world %-10u|", nb));
	printf("%u\n", printf("|Hello world %-10u|", neg_nb));
	/* Precision */
	printf("%u\n", printf("|%.5u|", nb));
	printf("%u\n", printf("|%.5u|", neg_nb));
	printf("%u\n", printf("|%-.5u|", nb));
	printf("%u\n", printf("|%-.5u|", neg_nb));
	printf("%u\n", printf("|%.u|", nb));
	printf("%u\n", printf("|%5.u|", nb));
	printf("%u\n", printf("|%5.5u|", nb));
	printf("%u\n", printf("|%1.5u|", nb));
	printf("%u\n", printf("|%10.5u|", nb));
	printf("%u\n", printf("|%-10.5u|", nb));
	printf("%u\n", printf("|%-10.5u|", neg_nb));
	printf("%u\n", printf("|%010.5u|", nb));
	printf("%u\n", printf("|%010.5u|", neg_nb));
	/* Length modifiers */
	/* hh flag */
	printf("%u\n", printf("|%hhu|", ch));
	printf("%u\n", printf("|%hhu|", char_min));
	printf("%u\n", printf("|%hhu|", char_max));
	/* h flag */
	printf("%u\n", printf("|%hu|", short_min));
	printf("%u\n", printf("|%hu|", short_max));
	printf("%u\n", printf("|%hu|", short_min));
	printf("%u\n", printf("|%lu|", long_min));
	printf("%u\n", printf("|%lu|", long_max));
	printf("%u\n", printf("|%llu|", llong_max));
	printf("%u\n", printf("|%llu|", llong_min));
	printf("====== i specifier ======\n");
	printf("%i\n", printf("|%i|", uint_min));
	printf("%i\n", printf("|%i|", uint_max));
	printf("%i\n", printf("|%i|", int_min));
	printf("%i\n", printf("|%i|", int_max));
	printf("%i\n", printf("|%hhi|", char_min));
	printf("%i\n", printf("|%hhi|", char_max));
	printf("%i\n", printf("|%hi|", short_min));
	printf("%i\n", printf("|%hi|", short_max));
	printf("%i\n", printf("|%li|", long_min));
	printf("%i\n", printf("|%li|", long_max));
	printf("%i\n", printf("|%lli|", llong_min));
	printf("%i\n", printf("|%lli|", llong_max));
	printf("%i\n", printf("|Hello world %i|", nb));
	printf("%i\n", printf("|Hello world %i|", neg_nb));
	printf("%i\n", printf("|Hello world %10d|", nb));
	printf("%i\n", printf("|Hello world %10d|", neg_nb));
	printf("%i\n", printf("|Hello world % 10d|", nb));
	printf("%i\n", printf("|Hello world % 10d|", neg_nb));
	printf("%i\n", printf("|Hello world %010d|", nb));
	printf("%i\n", printf("|Hello world %010d|", neg_nb));
	printf("%i\n", printf("|Hello world %0d|", nb));
	printf("%i\n", printf("|Hello world %+010d|", nb));
	printf("%i\n", printf("|Hello world %+010d|", neg_nb));
	printf("%i\n", printf("|Hello world %0 10d|", nb));
	printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%i\n", printf("|Hello world % 010d|", nb));
	printf("%i\n", printf("|Hello world %0 10d|", neg_nb));
	printf("%i\n", printf("|Hello world %-10d|", nb));
	printf("%i\n", printf("|Hello world %-10d|", neg_nb));
	printf("%i\n", printf("|Hello world %-+10d|", nb));
	printf("%i\n", printf("|Hello world %-+10d|", neg_nb));
	printf("%i\n", printf("|Decimal test%+-10d|", nb));
	printf("%i\n", printf("|Decimal test%+-10d|", neg_nb));
	printf("%i\n", printf("|%.5d|", nb));
	printf("%i\n", printf("|%.5d|", neg_nb));
	printf("%i\n", printf("|%-.5d|", nb));
	printf("%i\n", printf("|%-.5d|", neg_nb));
	printf("%i\n", printf("|%+.5d|", nb));
	printf("%i\n", printf("|%+.5d|", neg_nb));
	printf("%i\n", printf("|%.d|", nb));
	printf("%i\n", printf("|%5.d|", nb));
	printf("%i\n", printf("|%5.5d|", nb));
	printf("%i\n", printf("|%1.5d|", nb));
	printf("%i\n", printf("|%10.5d|", nb));
	printf("%i\n", printf("|%-10.5d|", nb));
	printf("%i\n", printf("|%-10.5d|", neg_nb));
	printf("%i\n", printf("|% 10.5d|", nb));
	printf("%i\n", printf("|%010.5d|", nb));
	printf("%i\n", printf("|%010.5d|", neg_nb));
	printf("%i\n", printf("|%+010.5d|", nb));
	printf("%i\n", printf("|%+010.5d|", neg_nb));
	printf("%i\n", printf("|% 010.5d|", nb));
	printf("====== p specifier ======\n");
	printf("%d\n",printf("|%p|", empty));
	printf("%d\n",printf("|%p|", str));
	printf("%d\n",printf("|%p|", tab));
	/* width flag */
	printf("%d\n",printf("|%10p|", empty));
	printf("%d\n",printf("|%100p|", empty));
	/* - flag */
	printf("%d\n", printf("|%-10p|", tab));
	printf("====== x specifier ======\n");
	printf("%d\n", printf("|%x|", 0));
	printf("%d\n", printf("|%x|", 9321124));
	printf("%d\n", printf("|%x|", int_min));
	printf("%d\n", printf("|%x|", int_max));
	printf("%d\n", printf("|%x|", uint_min));
	printf("%d\n", printf("|%x|", uint_max));
	printf("%d\n", printf("|%hx|", short_min));
	printf("%d\n", printf("|%hx|", short_max));
	printf("%d\n", printf("|%lx|", long_min));
	printf("%d\n", printf("|%lx|", long_max));
	printf("%d\n", printf("|%llx|", llong_min));
	printf("%d\n", printf("|%llx|", llong_max));
	printf("%d\n", printf("|%hx|", char_min));
	printf("%d\n", printf("|%hx|", char_max));
	printf("%d\n", printf("|%hx|", char_max));
	printf("%d\n", printf("|%hhx|", char_max));
	/* # flag */	
	printf("%d %%#x 0\n", printf("|%#x|", 0));
	printf("%d\n", printf("|%#x|", 9321124));
	printf("%d\n", printf("|%#0x|", 9321124));
	printf("%d\n", printf("|%#015x|", 9321124));
	/* - flag */
	printf("%d\n", printf("|%-15x|", 9321124));
	printf("%d\n", printf("|%-015x|", 9321124));
	printf("%d\n", printf("|%#15x|", 9321124));
	/* 42FileChecker */	
	printf("%d\n", printf("|%.x %.0x|", 0, 0));
	printf("%d\n", printf("|%#.x %#.0x|", 0, 0));
	printf("%d\n", printf("|%5.2x|", 5427));
	printf("%d %%#x\n", printf("|%#x|", 0));
	printf("====== X specifier ======\n");
	printf("%d\n", printf("|%X|", 42));
	printf("%d\n", printf("|%X|", 0));
	printf("%d\n", printf("|%X|", 9321124));
	printf("%d\n", printf("|%X|", int_min));
	printf("%d\n", printf("|%X|", int_max));
	printf("%d\n", printf("|%X|", uint_min));
	printf("%d\n", printf("|%X|", uint_max));
	printf("%d\n", printf("|%hX|", short_min));
	printf("%d\n", printf("|%hX|", short_max));
	printf("%d\n", printf("|%lX|", long_min));
	printf("%d\n", printf("|%lX|", long_max));
	printf("%d\n", printf("|%llX|", llong_min));
	printf("%d\n", printf("|%llX|", llong_max));
	printf("%d\n", printf("|%hX|", char_min));
	printf("%d\n", printf("|%hX|", char_max));
	printf("%d\n", printf("|%hX|", char_max));
	printf("%d\n", printf("|%hhX|", char_max));
	printf("%d\n", printf("|%#X|", 9321124));
	printf("%d\n", printf("|%#0X|", 9321124));
	printf("%d\n", printf("|%#015X|", 9321124));
	printf("%d\n", printf("|%#-15X|", 9321124));
	printf("%d\n", printf("|%-015X|", 9321124));
	printf("%d\n", printf("|%-15X|", 9321124));
	printf("%d\n", printf("|%#15X|", 9321124));
	printf("====== %% specifier ======\n");
	printf("%d\n", printf("|%%|"));
	printf("%d\n", printf("|%5%|"));
	printf("%d\n", printf("|%-5%|"));
	printf("%d\n", printf("|%0.5%|"));
	printf("%d\n", printf("|%.5%|"));
	printf("%d\n", printf("|%.0%|"));
	printf("%d\n", printf("|%    %|", "test"));
	printf("====== o specifier ======\n");
	printf("%d\n", printf("|Hello world %o|", nb));
	printf("%d\n", printf("|Hello world %o|", neg_nb));
	/* Space flag */
	printf("%d\n", printf("|Hello world %10o|", nb));
	printf("%d\n", printf("|Hello world %10o|", neg_nb));
	/* 0 flag */
	printf("%d\n", printf("|Hello world %010o|", nb));
	printf("%d\n", printf("|Hello world %010o|", neg_nb));
	printf("%d\n", printf("|Hello world %0o|", nb));
	/* - flag */
	printf("%d\n", printf("|Hello world %-10o|", nb));
	printf("%d\n", printf("|Hello world %-10o|", neg_nb));
	/* Precision */
	printf("%d\n", printf("|%.5o|", nb));
	printf("%d\n", printf("|%.5o|", neg_nb));
	printf("%d\n", printf("|%-.5o|", nb));
	printf("%d\n", printf("|%-.5o|", neg_nb));
	printf("%d Test: %%.o %%.0o\n", printf("|%.o %.0o|", 0, 0));
	// printf("%d\n", printf("|%.o|", nb));
	// printf("%d\n", printf("|%5.o|", nb));
	printf("%d\n", printf("|%5.5o|", nb));
	printf("%d\n", printf("|%1.5o|", nb));
	printf("%d\n", printf("|%10.5o|", nb));
	printf("%d\n", printf("|%-10.5o|", nb));
	printf("%d\n", printf("|%-10.5o|", neg_nb));
	printf("%d\n", printf("|%010.5o|", nb));
	printf("%d\n", printf("|%010.5o|", neg_nb));
	/* # flag */
	printf("%d\n", printf("|%#o|", nb));
	printf("%d Test: %%#o %%#0o\n", printf("|%#o %#0o|", 0, 0));
	printf("%d Specifier: %%#.o %%#.0o\n", printf("|%#.o %#.0o|", 0, 0));
	/* Length modifiers */
	/* hh */
	printf("%d\n", printf("|%hho|", char_min));
	printf("%o\n", printf("|%hho|", char_max));
	/* h */
	printf("%o\n", printf("|%ho|", short_min));
	printf("%o\n", printf("|%ho|", short_max));
	/* l */
	printf("%d\n", printf("|%lo|", long_min));
	printf("%d\n", printf("|%lo|", long_max));
	/* ll */
	printf("%d\n", printf("|%llo|", llong_min));
	printf("%d\n", printf("|%llo|", llong_max));;
	printf("====== f specifier ======\n");
	//printf("%d\n", printf("|%f|", double_nb));
	//printf("%d\n", printf("|%f|", neg_double_nb));

	fclose(printf_file);

	if((ft_printf_file = freopen("ft_printf.txt", "w" ,stdout)) == NULL)
	{
		printf("Cannot open file.\n");
		exit(1);
	}
	ft_printf("====== c Specifier ======\n");
	ft_printf("%d\n", ft_printf("|%c|", 'h'));
	ft_printf("%d\n", ft_printf("|%10c|", 'h'));
	ft_printf("%d\n", ft_printf("|%10c|", 'h'));
	ft_printf("%d\n", ft_printf("|%123c|", 'h'));
	ft_printf("%d\n", ft_printf("|%10c%10c|", 'h', 'e'));
	ft_printf("%d\n", ft_printf("|%-10c|", 'h'));
	ft_printf("%d\n", ft_printf("|%1c|", 'h'));
	ft_printf("%d\n", ft_printf("|%c|", 'h'));
	ft_printf("====== s specifier ======\n");
	ft_printf("%d\n", ft_printf("|Hive %s|", str));
	ft_printf("%d\n", ft_printf("|Hive %20s|", str));
	ft_printf("%d\n", ft_printf("|Hive %-20s|", str));
	ft_printf("%d\n", ft_printf("|Hive %-5s %s|", str, str));
	ft_printf("%d\n", ft_printf("|Hive %10.s|", str));
	ft_printf("%d\n", ft_printf("|Hive %10.5s|", str));
	ft_printf("%d\n", ft_printf("|Hive %.s|", str));
	ft_printf("%d\n", ft_printf("|%s %s|", NULL, str));
	ft_printf("%d\n", ft_printf("|%s|", NULL));
	ft_printf("%d\n", ft_printf("|%-5.2s is a string|", ""));
	ft_printf("%d\n", ft_printf("|%-.2s is a string|", ""));
	ft_printf("%d\n", ft_printf("|%.2s is a string|", ""));
	ft_printf("%d\n", ft_printf("|%5.2s is a string|", ""));
	ft_printf("====== d specifier ======\n");
	ft_printf("%d\n", ft_printf("|Hello world %d|", nb));
	ft_printf("%d\n", ft_printf("|Hello world %d|", neg_nb));
	/* Space flag */
	ft_printf("%d\n", ft_printf("|Hello world %10d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %10d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Hello world % 10d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world % 10d|", neg_nb));
	/* 0 flag */
	ft_printf("%d\n", ft_printf("|Hello world %010d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %010d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Hello world %0d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %+010d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %+010d|", neg_nb));
	/* Zero and Space */
	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Hello world % 010d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", neg_nb));	
	/* - flag */
	ft_printf("%d\n", ft_printf("|Hello world %-10d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %-10d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Hello world %-+10d|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %-+10d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Decimal test%+-10d|", nb));	
	ft_printf("%d\n", ft_printf("|Decimal test%+-10d|", neg_nb));
	/* Precision */
	ft_printf("%d\n", ft_printf("|%.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%.5d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|%-.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%-.5d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|%+.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%+.5d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|%.d|", nb));
	ft_printf("%d\n", ft_printf("|%5.d|", nb));
	ft_printf("%d\n", ft_printf("|%5.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%1.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%10.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%-10.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%-10.5d|", neg_nb));
	ft_printf("%d\n", ft_printf("|% 10.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%010.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%010.5d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|%+010.5d|", nb));	
	ft_printf("%d\n", ft_printf("|%+010.5d|", neg_nb));	
	ft_printf("%d\n", ft_printf("|% 010.5d|", nb));
	/* Length modifiers */
	ft_printf("%d\n", ft_printf("|%hhd|", ch));	
	ft_printf("%d\n", ft_printf("|%hhd|", char_min));	
	ft_printf("%d\n", ft_printf("|%hhd|", char_max));
	ft_printf("%d\n", ft_printf("|%hd|", short_min));	
	ft_printf("%d\n", ft_printf("|%hd|", short_max));	
	ft_printf("%d\n", ft_printf("|%hd|", short_min));	
	ft_printf("%d\n", ft_printf("|%ld|", long_min));	
	ft_printf("%d\n", ft_printf("|%lld|", llong_max));	
	ft_printf("%d\n", ft_printf("|%lld|", llong_min));	
	ft_printf("%d\n", ft_printf("|%.d %.0d|", 42, 43));	
	ft_printf("%d\n", ft_printf("|%-05d|", -42));	
	ft_printf("%d\n", ft_printf("|%++ d|", 42));
	ft_printf("%d\n", ft_printf("|% ++d|", 42));	
	ft_printf("%d\n", ft_printf("|%.d %.0d|", 0, 0));	
	ft_printf("%d\n", ft_printf("|%lld|", -9223372036854775808));
	ft_printf("====== u specifier ======\n");
	/* Without flags */
	ft_printf("%u\n", ft_printf("|Hello world %u|", nb));	
	ft_printf("%u\n", ft_printf("|Hello world %u|", neg_nb));
	/* Space flag */
	ft_printf("%u\n", ft_printf("|Hello world %10u|", nb));	
	ft_printf("%u\n", ft_printf("|Hello world %10u|", neg_nb));	
	/* 0 flag */
	ft_printf("%u\n", ft_printf("|Hello world %010u|", nb));	
	ft_printf("%u\n", ft_printf("|Hello world %010u|", neg_nb));	
	ft_printf("%u\n", ft_printf("|Hello world %0u|", nb));	
	/* - flag */
	ft_printf("%u\n", ft_printf("|Hello world %-10u|", nb));	
	ft_printf("%u\n", ft_printf("|Hello world %-10u|", neg_nb));
	/* Precision */
	ft_printf("%u\n", ft_printf("|%.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%.5u|", neg_nb));	
	ft_printf("%u\n", ft_printf("|%-.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%-.5u|", neg_nb));	
	ft_printf("%u\n", ft_printf("|%.u|", nb));	
	ft_printf("%u\n", ft_printf("|%5.u|", nb));	
	ft_printf("%u\n", ft_printf("|%5.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%1.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%10.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%-10.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%-10.5u|", neg_nb));	
	ft_printf("%u\n", ft_printf("|%010.5u|", nb));	
	ft_printf("%u\n", ft_printf("|%010.5u|", neg_nb));	
	/* Length modifiers */
	/* hh flag */
	ft_printf("%u\n", ft_printf("|%hhu|", ch));	
	ft_printf("%u\n", ft_printf("|%hhu|", char_min));	
	ft_printf("%u\n", ft_printf("|%hhu|", char_max));
	/* h flag */
	ft_printf("%u\n", ft_printf("|%hu|", short_min));
	ft_printf("%u\n", ft_printf("|%hu|", short_max));
	ft_printf("%u\n", ft_printf("|%hu|", short_min));	
	ft_printf("%u\n", ft_printf("|%lu|", long_min));	
	ft_printf("%u\n", ft_printf("|%lu|", long_max));	
	ft_printf("%u\n", ft_printf("|%llu|", llong_max));	
	ft_printf("%u\n", ft_printf("|%llu|", llong_min));
	ft_printf("====== i specifier ======\n");
	ft_printf("%i\n", ft_printf("|%i|", uint_min));
	ft_printf("%i\n", ft_printf("|%i|", uint_max));
	ft_printf("%i\n", ft_printf("|%i|", int_min));
	ft_printf("%i\n", ft_printf("|%i|", int_max));
	/* hh */
	ft_printf("%i\n", ft_printf("|%hhi|", char_min));
	ft_printf("%i\n", ft_printf("|%hhi|", char_max));
	/* h */
	ft_printf("%i\n", ft_printf("|%hi|", short_min));
	ft_printf("%i\n", ft_printf("|%hi|", short_max));
	/* l */
	ft_printf("%i\n", ft_printf("|%li|", long_min));
	ft_printf("%i\n", ft_printf("|%li|", long_max));
	/* ll */
	ft_printf("%i\n", ft_printf("|%lli|", llong_min));
	ft_printf("%i\n", ft_printf("|%lli|", llong_max));
	ft_printf("%i\n", ft_printf("|Hello world %i|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %i|", neg_nb));
	/* Space flag */
	ft_printf("%i\n", ft_printf("|Hello world %10d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %10d|", neg_nb));
	ft_printf("%i\n", ft_printf("|Hello world % 10d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world % 10d|", neg_nb));
	// /* 0 flag */
	ft_printf("%i\n", ft_printf("|Hello world %010d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %010d|", neg_nb));
	ft_printf("%i\n", ft_printf("|Hello world %0d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %+010d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %+010d|", neg_nb));
	// /* Zero and Space */
	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", neg_nb));
	ft_printf("%i\n", ft_printf("|Hello world % 010d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", neg_nb));
	// /* - flag */
	ft_printf("%i\n", ft_printf("|Hello world %-10d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %-10d|", neg_nb));
	ft_printf("%i\n", ft_printf("|Hello world %-+10d|", nb));
	ft_printf("%i\n", ft_printf("|Hello world %-+10d|", neg_nb));
	ft_printf("%i\n", ft_printf("|Decimal test%+-10d|", nb));
	ft_printf("%i\n", ft_printf("|Decimal test%+-10d|", neg_nb));	 
	/* Precision */
	ft_printf("%i\n", ft_printf("|%.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%.5d|", neg_nb));	
	ft_printf("%i\n", ft_printf("|%-.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%-.5d|", neg_nb));	
	ft_printf("%i\n", ft_printf("|%+.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%+.5d|", neg_nb));
	ft_printf("%i\n", ft_printf("|%.d|", nb));
	ft_printf("%i\n", ft_printf("|%5.d|", nb));	
	ft_printf("%i\n", ft_printf("|%5.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%1.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%10.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%-10.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%-10.5d|", neg_nb));	
	ft_printf("%i\n", ft_printf("|% 10.5d|", nb));	
	ft_printf("%i\n", ft_printf("|%010.5d|", nb));
	ft_printf("%i\n", ft_printf("|%010.5d|", neg_nb));
	ft_printf("%i\n", ft_printf("|%+010.5d|", nb));
	ft_printf("%i\n", ft_printf("|%+010.5d|", neg_nb));
	ft_printf("%i\n", ft_printf("|% 010.5d|", nb));
	ft_printf("====== p specifier ======\n");
	ft_printf("%d\n",ft_printf("|%p|", empty));	
	ft_printf("%d\n",ft_printf("|%p|", str));	
	ft_printf("%d\n",ft_printf("|%p|", tab));
	/* width flag */
	ft_printf("%d\n",ft_printf("|%10p|", empty));	
	ft_printf("%d\n",ft_printf("|%100p|", empty));
	/* - flag */
	ft_printf("%d\n", ft_printf("|%-10p|", tab));	
	ft_printf("====== x specifier ======\n");
	ft_printf("%d\n", ft_printf("|%x|", 0));	
	ft_printf("%d\n", ft_printf("|%x|", 9321124));	
	ft_printf("%d\n", ft_printf("|%x|", int_min));	
	ft_printf("%d\n", ft_printf("|%x|", int_max));	
	ft_printf("%d\n", ft_printf("|%x|", uint_min));	
	ft_printf("%d\n", ft_printf("|%x|", uint_max));	
	/* Length modifiers */	
	ft_printf("%d\n", ft_printf("|%hx|", short_min));	
	ft_printf("%d\n", ft_printf("|%hx|", short_max));	
	ft_printf("%d\n", ft_printf("|%lx|", long_min));	
	ft_printf("%d\n", ft_printf("|%lx|", long_max));	
	ft_printf("%d\n", ft_printf("|%llx|", llong_min));	
	ft_printf("%d\n", ft_printf("|%llx|", llong_max));	
	ft_printf("%d\n", ft_printf("|%hx|", char_min));	
	ft_printf("%d\n", ft_printf("|%hx|", char_max));	
	ft_printf("%d\n", ft_printf("|%hx|", char_max));	
	ft_printf("%d\n", ft_printf("|%hhx|", char_max));	
/* # flag */	
	ft_printf("%d %%#x 0\n", ft_printf("|%#x|", 0));
	ft_printf("%d\n", ft_printf("|%#x|", 9321124));
	ft_printf("%d\n", ft_printf("|%#0x|", 9321124));
	ft_printf("%d\n", ft_printf("|%#015x|", 9321124));
	/* - flag */
	ft_printf("%d\n", ft_printf("|%-15x|", 9321124));
	ft_printf("%d\n", ft_printf("|%-015x|", 9321124));
	ft_printf("%d\n", ft_printf("|%#15x|", 9321124));
	/* 42FileChecker */	
	ft_printf("%d\n", ft_printf("|%.x %.0x|", 0, 0));	
	ft_printf("%d\n", ft_printf("|%#.x %#.0x|", 0, 0));	
	ft_printf("%d\n", ft_printf("|%5.2x|", 5427));	
	ft_printf("%d %%#x\n", ft_printf("|%#x|", 0));
	ft_printf("====== X specifier ======\n");
	ft_printf("%d\n", ft_printf("|%X|", 42));	
	ft_printf("%d\n", ft_printf("|%X|", 0));	
	ft_printf("%d\n", ft_printf("|%X|", 9321124));	
	ft_printf("%d\n", ft_printf("|%X|", int_min));	
	ft_printf("%d\n", ft_printf("|%X|", int_max));	
	ft_printf("%d\n", ft_printf("|%X|", uint_min));	
	ft_printf("%d\n", ft_printf("|%X|", uint_max));
	/* Length modifiers */
	ft_printf("%d\n", ft_printf("|%hX|", short_min));	
	ft_printf("%d\n", ft_printf("|%hX|", short_max));	
	ft_printf("%d\n", ft_printf("|%lX|", long_min));	
	ft_printf("%d\n", ft_printf("|%lX|", long_max));	
	ft_printf("%d\n", ft_printf("|%llX|", llong_min));	
	ft_printf("%d\n", ft_printf("|%llX|", llong_max));	
	ft_printf("%d\n", ft_printf("|%hX|", char_min));	
	ft_printf("%d\n", ft_printf("|%hX|", char_max));	
	ft_printf("%d\n", ft_printf("|%hX|", char_max));	
	ft_printf("%d\n", ft_printf("|%hhX|", char_max));
	/* # flag */
	ft_printf("%d\n", ft_printf("|%#X|", 9321124));
	ft_printf("%d\n", ft_printf("|%#0X|", 9321124));
	ft_printf("%d\n", ft_printf("|%#015X|", 9321124));
	ft_printf("%d\n", ft_printf("|%#-15X|", 9321124));
	/* - flag */
	ft_printf("%d\n", ft_printf("|%-015X|", 9321124));
	ft_printf("%d\n", ft_printf("|%-15X|", 9321124));	
	ft_printf("%d\n", ft_printf("|%#15X|", 9321124));
	ft_printf("====== %% specifier ======\n");
	ft_printf("%d\n", ft_printf("|%%|"));	
	ft_printf("%d\n", ft_printf("|%5%|"));	
	ft_printf("%d\n", ft_printf("|%-5%|"));	
	ft_printf("%d\n", ft_printf("|%0.5%|"));	
	ft_printf("%d\n", ft_printf("|%.5%|"));	
	ft_printf("%d\n", ft_printf("|%.0%|"));
	ft_printf("%d\n", ft_printf("|%    %|", "test"));
	ft_printf("====== o specifier ======\n");
	ft_printf("%d\n", ft_printf("|Hello world %o|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %o|", neg_nb));
	/* Space flag */
	ft_printf("%d\n", ft_printf("|Hello world %10o|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %10o|", neg_nb));	
	/* 0 flag */
	ft_printf("%d\n", ft_printf("|Hello world %010o|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %010o|", neg_nb));	
	ft_printf("%d\n", ft_printf("|Hello world %0o|", nb));	
	/* - flag */
	ft_printf("%d\n", ft_printf("|Hello world %-10o|", nb));	
	ft_printf("%d\n", ft_printf("|Hello world %-10o|", neg_nb));
	/* Precision */
	ft_printf("%d\n", ft_printf("|%.5o|", nb));
	ft_printf("%d\n", ft_printf("|%.5o|", neg_nb));
	ft_printf("%d\n", ft_printf("|%-.5o|", nb));
	ft_printf("%d\n", ft_printf("|%-.5o|", neg_nb));
	ft_printf("%d Test: %%.o %%.0o\n", ft_printf("|%.o %.0o|", 0, 0));
	// ft_printf("%d\n", ft_printf("|%.o|", nb));
	// ft_printf("%d\n", ft_printf("|%5.o|", nb));
	ft_printf("%d\n", ft_printf("|%5.5o|", nb));
	ft_printf("%d\n", ft_printf("|%1.5o|", nb));	
	ft_printf("%d\n", ft_printf("|%10.5o|", nb));	
	ft_printf("%d\n", ft_printf("|%-10.5o|", nb));	
	ft_printf("%d\n", ft_printf("|%-10.5o|", neg_nb));	
	ft_printf("%d\n", ft_printf("|%010.5o|", nb));	
	ft_printf("%d\n", ft_printf("|%010.5o|", neg_nb));
	/* # flag */
	ft_printf("%d\n", ft_printf("|%#o|", nb));
	ft_printf("%d Test: %%#o %%#0o\n", ft_printf("|%#o %#0o|", 0, 0));
		ft_printf("%d Specifier: %%#.o %%#.0o\n", ft_printf("|%#.o %#.0o|", 0, 0));
	/* Length modifiers */
	/* hh */
	ft_printf("%d\n", ft_printf("|%hho|", char_min));
	ft_printf("%o\n", ft_printf("|%hho|", char_max));
	/* h */
	ft_printf("%o\n", ft_printf("|%ho|", short_min));
	ft_printf("%o\n", ft_printf("|%ho|", short_max));
	/* l */
	ft_printf("%d\n", ft_printf("|%lo|", long_min));	
	ft_printf("%d\n", ft_printf("|%lo|", long_max));
	/* ll */
	ft_printf("%d\n", ft_printf("|%llo|", llong_min));	
	ft_printf("%d\n", ft_printf("|%llo|", llong_max));
	ft_printf("====== f specifier ======\n");
	//ft_printf("%d\n", ft_printf("%f", double_nb));
	//ft_printf("%d\n", ft_printf("%f", neg_double_nb));

	

	

	fclose(ft_printf_file);

	return (0);
}
