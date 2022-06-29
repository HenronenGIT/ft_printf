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
#include <float.h>

void	test_f();
void	test_o();

#ifdef ORIGINAL
	# define PRINTER printf
	# define PRINTER_STR "printf"
#else
	# define PRINTER ft_printf
	# define PRINTER_STR "ft_printf"
#endif

int	main(void)
{
	FILE *printf_file;
	FILE *ft_printf_file;

	unsigned int		uint_min;
	unsigned int		uint_max;
	int					nb;
	int					neg_nb;
	int					int_max;
	int					int_min;
	long				long_min;
	long				long_max;
	short				short_min;
	short				short_max;
	char				char_min;
	char				char_max;
	char				ch;
	signed long long	llong_min;
	long long			llong_max;
	double				neg_double_nb;
	double				double_nb;
	double				double_max;
	double				ldouble_max;

	/* Pointer variables */
	char *empty = NULL;
	int	tab[5] = {0, 1 ,2};

	char *str = "String!";
	neg_nb = -42;
	nb = 42;
	short_max = 32767;
	short_min = -32768;
	int_max = INT_MAX;
	int_min = INT_MIN;
	uint_min = 0;
	uint_max = UINT_MAX;
	long_min = 	LONG_MIN;
	long_max = LONG_MAX;
	llong_min = LLONG_MIN;
	llong_max = LLONG_MAX;
	char_min = CHAR_MIN;
	char_max = CHAR_MAX;
	ch = 'a';
	neg_nb = -42;
	/* Doubles */
	double_nb = 42.0;
	neg_double_nb = -42.0;
	double_max = DBL_MAX;
	ldouble_max = LDBL_MAX;
	if((printf_file=freopen(PRINTER_STR".txt", "w" ,stdout)) == NULL)
	{
		printf("Cannot open printf.txt.\n");
		exit(1);
	}
	//printf("%d\n", PRINTER("|%-05d|", -42)); fflush(stdout);
	//printf("%d\n", PRINTER("|%++ d|", 42)); fflush(stdout);
	// printf("%d\n", PRINTER("|% ++d|", 42)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_min)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_max)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_max)); fflush(stdout);
	// printf("%d\n", PRINTER("|%-015x|", 9321124));fflush(stdout);
	// printf("%d\n", PRINTER("|%-015X|", 9321124)); fflush(stdout);
	// printf("%d\n", PRINTER("|%    %|", "test")); fflush(stdout);
	// printf("%d\n", PRINTER("|%s %s|", NULL, str)); fflush(stdout);
	// printf("%d\n", PRINTER("|%s|", NULL)); fflush(stdout);

	printf("====== c Specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%123c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c%10c|", 'h', 'e')); fflush(stdout);
	printf("%d\n", PRINTER("|%-10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%1c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%c|", 'h')); fflush(stdout);

	printf("====== s specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %20s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %-20s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %-5s %s|", str, str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %10.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %10.5s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%-5.2s is a string|", "")); fflush(stdout);
	printf("%d\n", PRINTER("|%-.2s is a string|", "")); fflush(stdout);
	printf("%d\n", PRINTER("|%.2s is a string|", "")); fflush(stdout);
	printf("%d\n", PRINTER("|%5.2s is a string|", "")); fflush(stdout);

	printf("====== d specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %d|", neg_nb)); fflush(stdout);
	/* Space flag */
	printf("%d\n", PRINTER("|Hello world %10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world % 10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world % 10d|", neg_nb)); fflush(stdout);
	/* 0 flag */
	printf("%d\n", PRINTER("|Hello world %010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %010d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %0d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %+010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %+010d|", neg_nb)); fflush(stdout);
	/* Zero and Space */
	printf("%d\n", PRINTER("|Hello world %0 10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %0 10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world % 010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %0 10d|", neg_nb)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|Hello world %-10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %-10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %-+10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %-+10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Decimal test%+-10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Decimal test%+-10d|", neg_nb)); fflush(stdout);
	/* Precision */
	printf("%d\n", PRINTER("|%.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%1.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 10.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010.5d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010.5d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 010.5d|", nb)); fflush(stdout);
	/* Length modifiers */
	printf("%d\n", PRINTER("|%hhd|", ch)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhd|", char_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhd|", char_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hd|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hd|", short_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hd|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%ld|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lld|", llong_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%lld|", llong_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%.d %.0d|", 42, 43)); fflush(stdout);
	printf("%d\n", PRINTER("|%.d %.0d|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%ld|", long_min)); fflush(stdout);

	printf("====== u specifier ======\n"); fflush(stdout);
	/* Without flags */
	printf("%d\n", PRINTER("|%u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%u|", neg_nb)); fflush(stdout);
	/* Space flag */
	printf("%d\n", PRINTER("|%10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10u|", neg_nb)); fflush(stdout);
	/* 0 flag */
	printf("%d\n", PRINTER("|%010u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0u|", nb)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|%-10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10u|", neg_nb)); fflush(stdout);
	/* Precision */
	printf("%d\n", PRINTER("|%.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.5u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%1.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5u|", neg_nb)); fflush(stdout);
	/* Length modifiers */
	/* hh flag */
	printf("%d\n", PRINTER("|%hhu|", ch)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhu|", char_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhu|", char_max)); fflush(stdout);
	/* h flag */
	printf("%d\n", PRINTER("|%hu|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hu|", short_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hu|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lu|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lu|", long_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%llu|", llong_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%llu|", llong_min)); fflush(stdout);

	printf("====== i specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", uint_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", uint_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", int_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", int_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhi|", char_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhi|", char_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hi|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hi|", short_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%li|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%li|", long_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%lli|", llong_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lli|", llong_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 010i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-+10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-+10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+-10i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+-10i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%1.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 10.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010.5i|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010.5i|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 010.5i|", nb)); fflush(stdout);
	printf("====== p specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%p|", empty)); fflush(stdout);
	printf("%d\n", PRINTER("|%p|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%p|", tab)); fflush(stdout);
	/* width flag */
	printf("%d\n", PRINTER("|%10p|", empty)); fflush(stdout);
	printf("%d\n", PRINTER("|%100p|", empty)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|%-10p|", tab)); fflush(stdout);

	printf("====== x specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", int_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", int_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", uint_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%x|", uint_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hx|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hx|", short_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%lx|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lx|", long_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%llx|", llong_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%llx|", llong_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhx|", char_max)); fflush(stdout);
	/* # flag */	
	printf("%d %%#x 0\n", PRINTER("|%#x|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#x|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#0x|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#015x|", 9321124)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|%-15x|", 9321124));fflush(stdout);
	printf("%d\n", PRINTER("|%#15x|", 9321124));fflush(stdout);
	/* 42FileChecker */	
	printf("%d\n", PRINTER("|%.x %.0x|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.x %#.0x|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.2x|", 5427)); fflush(stdout);
	printf("%d %%#x\n", PRINTER("|%#x|", 0)); fflush(stdout);

	printf("====== X specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 42)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", int_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", int_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", uint_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", uint_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hX|", short_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hX|", short_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%lX|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lX|", long_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%llX|", llong_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%llX|", llong_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhX|", char_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhX|", char_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhX|", char_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%hhX|", char_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%#X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#0X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#015X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#-15X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%-15X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#15X|", 9321124)); fflush(stdout);
	printf("====== %% specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%-5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%0.5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%.5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%.0%|")); fflush(stdout);

	printf("====== o specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %o|", neg_nb)); fflush(stdout);
	/* Space flag */
	printf("%d\n", PRINTER("|Hello world %10o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %10o|", neg_nb)); fflush(stdout);
	/* 0 flag */
	printf("%d\n", PRINTER("|%010o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010o|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0o|", nb)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|%-10o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10o|", neg_nb)); fflush(stdout);
	/* Precision */
	printf("%d\n", PRINTER("|%.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.5o|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-.5o|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%.o %.0o|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%.o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%1.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10.5o|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010.5o|", neg_nb)); fflush(stdout);
	/* # flag */
	printf("%d\n", PRINTER("|%#o|", nb)); fflush(stdout);
	printf("%d\n",PRINTER("|%#o %#0o|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.o %#.0o|", 0, 0)); fflush(stdout);
	/* Length modifiers */
	/* hh */
	printf("%d\n", PRINTER("|%hho|", char_min)); fflush(stdout);
	printf("%o\n", PRINTER("|%hho|", char_max)); fflush(stdout);
	/* h */
	printf("%o\n", PRINTER("|%ho|", short_min)); fflush(stdout);
	printf("%o\n", PRINTER("|%ho|", short_max)); fflush(stdout);
	/* l */
	printf("%d\n", PRINTER("|%lo|", long_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%lo|", long_max)); fflush(stdout);
	/* ll */
	printf("%d\n", PRINTER("|%llo|", llong_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%llo|", llong_max));; fflush(stdout);

	printf("====== f specifier ======\n"); fflush(stdout);
	printf(">>>>>>>>>> Normal <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 42.04202)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", double_nb)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%f|", double_max)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%f|", ldouble_max)); fflush(stdout);
	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 42.421)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 1.5)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 2.5)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%.3f|", 2.5685)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%.3f|", 2.5675)); fflush(stdout);

	// printf(">Width & Precision<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%5.1f|", double_nb)); fflush(stdout);

	// printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%20f|", double_nb)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%100f|", double_nb)); fflush(stdout);

	// printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%-20f|", double_nb)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%-100f|", double_nb)); fflush(stdout);

	// printf(">>>>>>>>>> '0' flag <<<<<<<<<<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%020f|", double_nb)); fflush(stdout);

	// printf(">>>>>>>>>> '+' && width flag <<<<<<<<<<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%+20f|", double_nb)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%+20f|", neg_double_nb)); fflush(stdout);

	// printf(">>>>>>>>>> '-' && '.'<<<<<<<<<<\n"); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%-20.6f|", double_nb)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%-20.8f|", double_nb)); fflush(stdout);

	// printf("~%d~\n", PRINTER("|%#f|", double_nb)); fflush(stdout);

	fclose(printf_file);

// 	if((ft_printf_file = freopen("ft_printf.txt", "w" ,stdout)) == NULL)
// 	{
// 		printf("Cannot open file.\n");
// 		exit(1);
// 	}
// 	ft_printf("====== c Specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|%c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%10c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%10c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%123c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%10c%10c|", 'h', 'e'));
// 	ft_printf("%d\n", ft_printf("|%-10c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%1c|", 'h'));
// 	ft_printf("%d\n", ft_printf("|%c|", 'h'));
// 	ft_printf("====== s specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|Hive %s|", str));
// 	ft_printf("%d\n", ft_printf("|Hive %20s|", str));
// 	ft_printf("%d\n", ft_printf("|Hive %-20s|", str));
// 	ft_printf("%d\n", ft_printf("|Hive %-5s %s|", str, str));
// 	ft_printf("%d\n", ft_printf("|Hive %10.s|", str));
// 	ft_printf("%d\n", ft_printf("|Hive %10.5s|", str));
// 	ft_printf("%d\n", ft_printf("|Hive %.s|", str));
// 	ft_printf("%d\n", ft_printf("|%s %s|", NULL, str));
// 	ft_printf("%d\n", ft_printf("|%s|", NULL));
// 	ft_printf("%d\n", ft_printf("|%-5.2s is a string|", ""));
// 	ft_printf("%d\n", ft_printf("|%-.2s is a string|", ""));
// 	ft_printf("%d\n", ft_printf("|%.2s is a string|", ""));
// 	ft_printf("%d\n", ft_printf("|%5.2s is a string|", ""));
// 	ft_printf("====== d specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|Hello world %d|", nb));
// 	ft_printf("%d\n", ft_printf("|Hello world %d|", neg_nb));
// 	/* Space flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %10d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %10d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world % 10d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world % 10d|", neg_nb));
// 	/* 0 flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %010d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %010d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %0d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %+010d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %+010d|", neg_nb));
// 	/* Zero and Space */
// 	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world % 010d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %0 10d|", neg_nb));	
// 	/* - flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %-10d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %-10d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %-+10d|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %-+10d|", neg_nb));
// 	ft_printf("%d\n", ft_printf("|Decimal test%+-10d|", nb));
// 	ft_printf("%d\n", ft_printf("|Decimal test%+-10d|", neg_nb));
// 	/* Precision */
// 	ft_printf("%d\n", ft_printf("|%.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%.5d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|%-.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%-.5d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|%+.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%+.5d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|%.d|", nb));
// 	ft_printf("%d\n", ft_printf("|%5.d|", nb));
// 	ft_printf("%d\n", ft_printf("|%5.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%1.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%10.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%-10.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%-10.5d|", neg_nb));
// 	ft_printf("%d\n", ft_printf("|% 10.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%010.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%010.5d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|%+010.5d|", nb));	
// 	ft_printf("%d\n", ft_printf("|%+010.5d|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|% 010.5d|", nb));
// 	/* Length modifiers */
// 	ft_printf("%d\n", ft_printf("|%hhd|", ch));	
// 	ft_printf("%d\n", ft_printf("|%hhd|", char_min));	
// 	ft_printf("%d\n", ft_printf("|%hhd|", char_max));
// 	ft_printf("%d\n", ft_printf("|%hd|", short_min));	
// 	ft_printf("%d\n", ft_printf("|%hd|", short_max));	
// 	ft_printf("%d\n", ft_printf("|%hd|", short_min));	
// 	ft_printf("%d\n", ft_printf("|%ld|", long_min));	
// 	ft_printf("%d\n", ft_printf("|%lld|", llong_max));	
// 	ft_printf("%d\n", ft_printf("|%lld|", llong_min));	
// 	ft_printf("%d\n", ft_printf("|%.d %.0d|", 42, 43));	
// 	ft_printf("%d\n", ft_printf("|%-05d|", -42));	
// 	ft_printf("%d\n", ft_printf("|%++ d|", 42));
// 	ft_printf("%d\n", ft_printf("|% ++d|", 42));	
// 	ft_printf("%d\n", ft_printf("|%.d %.0d|", 0, 0));	
// 	ft_printf("%d\n", ft_printf("|%lld|", long_min));
// 	ft_printf("====== u specifier ======\n");
// 	/* Without flags */
// 	ft_printf("%u\n", ft_printf("|Hello world %u|", nb));	
// 	ft_printf("%u\n", ft_printf("|Hello world %u|", neg_nb));
// 	/* Space flag */
// 	ft_printf("%u\n", ft_printf("|Hello world %10u|", nb));	
// 	ft_printf("%u\n", ft_printf("|Hello world %10u|", neg_nb));	
// 	/* 0 flag */
// 	ft_printf("%u\n", ft_printf("|Hello world %010u|", nb));	
// 	ft_printf("%u\n", ft_printf("|Hello world %010u|", neg_nb));	
// 	ft_printf("%u\n", ft_printf("|Hello world %0u|", nb));	
// 	/* - flag */
// 	ft_printf("%u\n", ft_printf("|Hello world %-10u|", nb));	
// 	ft_printf("%u\n", ft_printf("|Hello world %-10u|", neg_nb));
// 	/* Precision */
// 	ft_printf("%u\n", ft_printf("|%.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%.5u|", neg_nb));	
// 	ft_printf("%u\n", ft_printf("|%-.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%-.5u|", neg_nb));	
// 	ft_printf("%u\n", ft_printf("|%.u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%5.u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%5.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%1.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%10.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%-10.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%-10.5u|", neg_nb));	
// 	ft_printf("%u\n", ft_printf("|%010.5u|", nb));	
// 	ft_printf("%u\n", ft_printf("|%010.5u|", neg_nb));	
// 	/* Length modifiers */
// 	/* hh flag */
// 	ft_printf("%u\n", ft_printf("|%hhu|", ch));	
// 	ft_printf("%u\n", ft_printf("|%hhu|", char_min));	
// 	ft_printf("%u\n", ft_printf("|%hhu|", char_max));
// 	/* h flag */
// 	ft_printf("%u\n", ft_printf("|%hu|", short_min));
// 	ft_printf("%u\n", ft_printf("|%hu|", short_max));
// 	ft_printf("%u\n", ft_printf("|%hu|", short_min));	
// 	ft_printf("%u\n", ft_printf("|%lu|", long_min));	
// 	ft_printf("%u\n", ft_printf("|%lu|", long_max));	
// 	ft_printf("%u\n", ft_printf("|%llu|", llong_max));	
// 	ft_printf("%u\n", ft_printf("|%llu|", llong_min));
// 	ft_printf("====== i specifier ======\n");
// 	ft_printf("%i\n", ft_printf("|%i|", uint_min));
// 	ft_printf("%i\n", ft_printf("|%i|", uint_max));
// 	ft_printf("%i\n", ft_printf("|%i|", int_min));
// 	ft_printf("%i\n", ft_printf("|%i|", int_max));
// 	/* hh */
// 	ft_printf("%i\n", ft_printf("|%hhi|", char_min));
// 	ft_printf("%i\n", ft_printf("|%hhi|", char_max));
// 	/* h */
// 	ft_printf("%i\n", ft_printf("|%hi|", short_min));
// 	ft_printf("%i\n", ft_printf("|%hi|", short_max));
// 	/* l */
// 	ft_printf("%i\n", ft_printf("|%li|", long_min));
// 	ft_printf("%i\n", ft_printf("|%li|", long_max));
// 	/* ll */
// 	ft_printf("%i\n", ft_printf("|%lli|", llong_min));
// 	ft_printf("%i\n", ft_printf("|%lli|", llong_max));
// 	ft_printf("%i\n", ft_printf("|Hello world %i|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %i|", neg_nb));
// 	/* Space flag */
// 	ft_printf("%i\n", ft_printf("|Hello world %10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %10d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|Hello world % 10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world % 10d|", neg_nb));
// 	// /* 0 flag */
// 	ft_printf("%i\n", ft_printf("|Hello world %010d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %010d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %0d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %+010d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %+010d|", neg_nb));
// 	// /* Zero and Space */
// 	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|Hello world % 010d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %0 10d|", neg_nb));
// 	// /* - flag */
// 	ft_printf("%i\n", ft_printf("|Hello world %-10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %-10d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %-+10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Hello world %-+10d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|Decimal test%+-10d|", nb));
// 	ft_printf("%i\n", ft_printf("|Decimal test%+-10d|", neg_nb));	 
// 	/* Precision */
// 	ft_printf("%i\n", ft_printf("|%.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%.5d|", neg_nb));	
// 	ft_printf("%i\n", ft_printf("|%-.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%-.5d|", neg_nb));	
// 	ft_printf("%i\n", ft_printf("|%+.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%+.5d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|%.d|", nb));
// 	ft_printf("%i\n", ft_printf("|%5.d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%5.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%1.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%10.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%-10.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%-10.5d|", neg_nb));	
// 	ft_printf("%i\n", ft_printf("|% 10.5d|", nb));	
// 	ft_printf("%i\n", ft_printf("|%010.5d|", nb));
// 	ft_printf("%i\n", ft_printf("|%010.5d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|%+010.5d|", nb));
// 	ft_printf("%i\n", ft_printf("|%+010.5d|", neg_nb));
// 	ft_printf("%i\n", ft_printf("|% 010.5d|", nb));
// 	ft_printf("====== p specifier ======\n");
// 	ft_printf("%d\n",ft_printf("|%p|", empty));	
// 	ft_printf("%d\n",ft_printf("|%p|", str));	
// 	ft_printf("%d\n",ft_printf("|%p|", tab));
// 	/* width flag */
// 	ft_printf("%d\n",ft_printf("|%10p|", empty));	
// 	ft_printf("%d\n",ft_printf("|%100p|", empty));
// 	/* - flag */
// 	ft_printf("%d\n", ft_printf("|%-10p|", tab));	
// 	ft_printf("====== x specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|%x|", 0));	
// 	ft_printf("%d\n", ft_printf("|%x|", 9321124));	
// 	ft_printf("%d\n", ft_printf("|%x|", int_min));	
// 	ft_printf("%d\n", ft_printf("|%x|", int_max));	
// 	ft_printf("%d\n", ft_printf("|%x|", uint_min));	
// 	ft_printf("%d\n", ft_printf("|%x|", uint_max));	
// 	/* Length modifiers */	
// 	ft_printf("%d\n", ft_printf("|%hx|", short_min));	
// 	ft_printf("%d\n", ft_printf("|%hx|", short_max));	
// 	ft_printf("%d\n", ft_printf("|%lx|", long_min));	
// 	ft_printf("%d\n", ft_printf("|%lx|", long_max));	
// 	ft_printf("%d\n", ft_printf("|%llx|", llong_min));	
// 	ft_printf("%d\n", ft_printf("|%llx|", llong_max));	
// 	ft_printf("%d\n", ft_printf("|%hx|", char_min));	
// 	ft_printf("%d\n", ft_printf("|%hx|", char_max));	
// 	ft_printf("%d\n", ft_printf("|%hx|", char_max));	
// 	ft_printf("%d\n", ft_printf("|%hhx|", char_max));	
// /* # flag */	
// 	ft_printf("%d %%#x 0\n", ft_printf("|%#x|", 0));
// 	ft_printf("%d\n", ft_printf("|%#x|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#0x|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#015x|", 9321124));
// 	/* - flag */
// 	ft_printf("%d\n", ft_printf("|%-15x|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%-015x|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#15x|", 9321124));
// 	/* 42FileChecker */	
// 	ft_printf("%d\n", ft_printf("|%.x %.0x|", 0, 0));	
// 	ft_printf("%d\n", ft_printf("|%#.x %#.0x|", 0, 0));	
// 	ft_printf("%d\n", ft_printf("|%5.2x|", 5427));	
// 	ft_printf("%d %%#x\n", ft_printf("|%#x|", 0));
// 	ft_printf("====== X specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|%X|", 42));	
// 	ft_printf("%d\n", ft_printf("|%X|", 0));	
// 	ft_printf("%d\n", ft_printf("|%X|", 9321124));	
// 	ft_printf("%d\n", ft_printf("|%X|", int_min));	
// 	ft_printf("%d\n", ft_printf("|%X|", int_max));	
// 	ft_printf("%d\n", ft_printf("|%X|", uint_min));	
// 	ft_printf("%d\n", ft_printf("|%X|", uint_max));
// 	/* Length modifiers */
// 	ft_printf("%d\n", ft_printf("|%hX|", short_min));	
// 	ft_printf("%d\n", ft_printf("|%hX|", short_max));	
// 	ft_printf("%d\n", ft_printf("|%lX|", long_min));	
// 	ft_printf("%d\n", ft_printf("|%lX|", long_max));	
// 	ft_printf("%d\n", ft_printf("|%llX|", llong_min));	
// 	ft_printf("%d\n", ft_printf("|%llX|", llong_max));	
// 	ft_printf("%d\n", ft_printf("|%hX|", char_min));	
// 	ft_printf("%d\n", ft_printf("|%hX|", char_max));	
// 	ft_printf("%d\n", ft_printf("|%hX|", char_max));	
// 	ft_printf("%d\n", ft_printf("|%hhX|", char_max));
// 	/* # flag */
// 	ft_printf("%d\n", ft_printf("|%#X|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#0X|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#015X|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%#-15X|", 9321124));
// 	/* - flag */
// 	ft_printf("%d\n", ft_printf("|%-015X|", 9321124));
// 	ft_printf("%d\n", ft_printf("|%-15X|", 9321124));	
// 	ft_printf("%d\n", ft_printf("|%#15X|", 9321124));
// 	ft_printf("====== %% specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|%%|"));	
// 	ft_printf("%d\n", ft_printf("|%5%|"));	
// 	ft_printf("%d\n", ft_printf("|%-5%|"));	
// 	ft_printf("%d\n", ft_printf("|%0.5%|"));	
// 	ft_printf("%d\n", ft_printf("|%.5%|"));	
// 	ft_printf("%d\n", ft_printf("|%.0%|"));
// 	ft_printf("%d\n", ft_printf("|%    %|", "test"));
// 	ft_printf("====== o specifier ======\n");
// 	ft_printf("%d\n", ft_printf("|Hello world %o|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %o|", neg_nb));
// 	/* Space flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %10o|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %10o|", neg_nb));	
// 	/* 0 flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %010o|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %010o|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %0o|", nb));	
// 	/* - flag */
// 	ft_printf("%d\n", ft_printf("|Hello world %-10o|", nb));	
// 	ft_printf("%d\n", ft_printf("|Hello world %-10o|", neg_nb));
// 	/* Precision */
// 	ft_printf("%d\n", ft_printf("|%.5o|", nb));
// 	ft_printf("%d\n", ft_printf("|%.5o|", neg_nb));
// 	ft_printf("%d\n", ft_printf("|%-.5o|", nb));
// 	ft_printf("%d\n", ft_printf("|%-.5o|", neg_nb));
// 	ft_printf("%d Test: %%.o %%.0o\n", ft_printf("|%.o %.0o|", 0, 0));
// 	// ft_printf("%d\n", ft_printf("|%.o|", nb));
// 	// ft_printf("%d\n", ft_printf("|%5.o|", nb));
// 	ft_printf("%d\n", ft_printf("|%5.5o|", nb));
// 	ft_printf("%d\n", ft_printf("|%1.5o|", nb));	
// 	ft_printf("%d\n", ft_printf("|%10.5o|", nb));	
// 	ft_printf("%d\n", ft_printf("|%-10.5o|", nb));	
// 	ft_printf("%d\n", ft_printf("|%-10.5o|", neg_nb));	
// 	ft_printf("%d\n", ft_printf("|%010.5o|", nb));	
// 	ft_printf("%d\n", ft_printf("|%010.5o|", neg_nb));
// 	/* # flag */
// 	ft_printf("%d\n", ft_printf("|%#o|", nb));
// 	ft_printf("%d Test: %%#o %%#0o\n", ft_printf("|%#o %#0o|", 0, 0));
// 	ft_printf("%d Specifier: %%#.o %%#.0o\n", ft_printf("|%#.o %#.0o|", 0, 0));
// 	/* Length modifiers */
// 	/* hh */
// 	ft_printf("%d\n", ft_printf("|%hho|", char_min));
// 	ft_printf("%o\n", ft_printf("|%hho|", char_max));
// 	/* h */
// 	ft_printf("%o\n", ft_printf("|%ho|", short_min));
// 	ft_printf("%o\n", ft_printf("|%ho|", short_max));
// 	/* l */
// 	ft_printf("%d\n", ft_printf("|%lo|", long_min));
// 	ft_printf("%d\n", ft_printf("|%lo|", long_max));
// 	/* ll */
// 	ft_printf("%d\n", ft_printf("|%llo|", llong_min));	
// 	ft_printf("%d\n", ft_printf("|%llo|", llong_max));
// 	ft_printf("====== f specifier ======\n");
// 	ft_printf("%d\n", ft_printf("%f", double_nb));
// 	//ft_printf("%d\n", ft_printf("%f", neg_double_nb));

	

	

// 	fclose(ft_printf_file);

	return (0);
}
