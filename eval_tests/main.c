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
#include <stdio.h>

void	test_f();
void	test_o();

#define TAB (int *)31212412421

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
	neg_double_nb = -42.042;
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
	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%123c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c%10c|", 'h', 'e')); fflush(stdout);
	printf("%d\n", PRINTER("|%1c|", 'h')); fflush(stdout);
	printf(">>>>>>>>>> - flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10c|", 'h')); fflush(stdout);
	// printf("%d\n", PRINTER("|%5.hhu %5.0hhu|", 0, 0)); fflush(stdout);

	printf("====== s specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %s|", str)); fflush(stdout);
	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %20s|", str)); fflush(stdout);
	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %-20s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %-5s %s|", str, str)); fflush(stdout);
	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %10.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %10.5s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%.2s is a string|", "")); fflush(stdout);
	printf(">>>>>>>>>> '-' && Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-5.2s is a string|", "")); fflush(stdout);
	printf("%d\n", PRINTER("|%-.2s is a string|", "")); fflush(stdout);
	printf(">>>>>>>>>> Width && Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%5.2s is a string|", "")); fflush(stdout);

	printf("====== d specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%d|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10d|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> Space && Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|% 10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 10d|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> '0' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0d|", nb)); fflush(stdout);

	printf(">>>>>>>>>> '0' && '+' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%+010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+010d|", neg_nb)); fflush(stdout);
	printf(">>>>>>>>>> '0' && ' ' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|% 010d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0 10d|", neg_nb)); fflush(stdout);
	/* - flag */
	printf(">>>>>>>>>> '-' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10d|", neg_nb)); fflush(stdout);
	printf(">>>>>>>>>> '-' && '+' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-+10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-+10d|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+-10d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%+-10d|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
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
	
	printf(">>>>>>>>>> Length modifier <<<<<<<<<<\n"); fflush(stdout);
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

	/* HC */
	printf("~%d~\n", PRINTER("|%010.1d|", -0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%0-8.5d|", 32)); fflush(stdout);
	


	printf("====== u specifier ======\n"); fflush(stdout);
	// /* Without flags */
	printf("%d\n", PRINTER("|%u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%u|", neg_nb)); fflush(stdout);
	/* Space flag */
	printf("%d\n", PRINTER("|%10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10u|", neg_nb)); fflush(stdout);
	/* 0 flag */
	printf("%d\n", PRINTER("|%010u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0u|", nb)); fflush(stdout);

	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10u|", neg_nb)); fflush(stdout);

	// printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
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
	printf("%d\n", PRINTER("|%.0u|", 0)); fflush(stdout);
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

	// printf("%d\n", PRINTER("|%llu|", 18446744073709551615));; fflush(stdout);


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
	printf(">>>>>>>>>> '0' flag <<<<<<<<<<\n"); fflush(stdout);
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
	printf("%d\n", PRINTER("|%p|", TAB)); fflush(stdout);
	printf("%d\n", PRINTER("|%p|", TAB)); fflush(stdout);
	printf(">>>>>>>>>> width flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10p|", empty)); fflush(stdout);
	printf("%d\n", PRINTER("|%100p|", empty)); fflush(stdout);
	/* - flag */
	printf("%d\n", PRINTER("|%-10p|", TAB)); fflush(stdout);
	/* precision */
	printf("~%d~\n", PRINTER("|%.p|", NULL)); fflush(stdout);

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
	printf(">>>>>>>>>> # flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%#.8x|", 42)); fflush(stdout);
	printf("%d\n", PRINTER("|%#2.8x|", 42)); fflush(stdout);
	printf("%d\n", PRINTER("|%#7x|", 33)); fflush(stdout);
	printf("%d\n", PRINTER("|%#15x|", 9321124));fflush(stdout);
	printf("%d\n", PRINTER("|%#x|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#x|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#0x|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#015x|", 9321124)); fflush(stdout);
	printf(">>>>>>>>>> - flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-15x|", 9321124));fflush(stdout);
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
	printf("%d\n", PRINTER("|%#X|", 0)); fflush(stdout);

	printf("====== %% specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%-5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%0.5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%.5%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%.0%|")); fflush(stdout);
	printf("%d\n", PRINTER("|%05%|")); fflush(stdout);
	// printf("%d\n", PRINTER("|%|")); fflush(stdout);

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
	printf("%d\n", PRINTER("|%#o %#0o|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.o %#.0o|", 0, 0)); fflush(stdout);
	/* # && precision */
	printf("%d\n", PRINTER("|%#.8o|", nb)); fflush(stdout);
	
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
	printf("~%d~\n", PRINTER("|%f|", 2.3)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 0.5)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 42.0420297987)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 42.0420285987)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 42.99999999999999)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", neg_double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 1444565444646.6465424242242)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%f|", double_max)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%f|", ldouble_max)); fflush(stdout);
	printf(">>>>>>>>>> Hash <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%#.f|", 0.000000)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%0#10.1f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%#010.1f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%#f|", double_nb)); fflush(stdout);

	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 42.421)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 1.5)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 2.5)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 1.6)); fflush(stdout);
		printf("~%d~\n", PRINTER("|%.0f|", 2.6)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 2.5685)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 0.5)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.15f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.15f|", 0.000000)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.1f|", 0.150000)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 2.51)); fflush(stdout);
		printf("~%d~\n", PRINTER("|%.3f|", 2.5675)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 7.4)); fflush(stdout);

	printf(">>>>>>>>>> Zero flag <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%010.1f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%010.5f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%10.f|", 0.5)); fflush(stdout);

	printf(">>>>>>>>>> Length modifier <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%lf|", 42.42)); fflush(stdout);
	// printf("~%d~\n", PRINTER("|%Lf|", 42.42)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%Lf|", -1444565444646.6465424242242454654L)); fflush(stdout);

	printf(">>>>>>>>>> Width & Precision <<<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%5.1f|", double_nb)); fflush(stdout);

	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%20f|", double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%100f|", double_nb)); fflush(stdout);

	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%-20f|", double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%-100f|", double_nb)); fflush(stdout);

	printf(">>>>>>>>>> '0' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%020f|", double_nb)); fflush(stdout);

	printf(">>>>>>>>>> '+' && width flag <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%+20f|", double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%+20f|", neg_double_nb)); fflush(stdout);

	printf(">>>>>>>>>> '-' && '.'<<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%-20.6f|", double_nb)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%-20.8f|", double_nb)); fflush(stdout);

	printf("~%d~\n", PRINTER("|%.10f|", 0.87650894255)); fflush(stdout);

	/* Roopes tests */
	int i = 7, j = -7, k = 0;
	printf("~%d~\n", PRINTER("%-8s|%+d|\t\t|%+d|\t|%+d|", "%+d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+1d|\t\t|%+1d|\t|%+1d|", "%+1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+3.0d|\t\t|%+3.0d|\t|%+3.0d|", "%+3.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4d|\t\t|%+4d|\t|%+4d|", "%+4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+.1d|\t\t|%+.1d|\t|%+.1d|", "%+.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+.5d|\t|%+.5d|\t|%+.5d|", "%+.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+1.1d|\t\t|%+1.1d|\t|%+1.1d|", "%+1.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+1.5d|\t|%+1.5d|\t|%+1.5d|", "%+1.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+3.5d|\t|%+3.5d|\t|%+3.5d|", "%+3.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4.1d|\t\t|%+4.1d|\t|%+4.1d|", "%+4.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+5.2d|\t\t|%+5.2d|\t|%+5.2d|", "%+5.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+5.0d|\t\t|%+5.0d|\t|%+5.0d|", "%+5.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+0d|\t\t|%+0d|\t|%+0d|", "%+0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+01d|\t\t|%+01d|\t|%+01d|", "%+01d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+04d|\t\t|%+04d|\t|%+04d|", "%+04d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+0.0d|\t\t|%+0.0d|\t|%+0.0d|", "%+0.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+0.2d|\t\t|%+0.2d|\t|%+0.2d|", "%+0.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+0.5d|\t|%+0.5d|\t|%+0.5d|", "%+0.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+04.0d|\t\t|%+04.0d|\t|%+04.0d|", "%+04.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+04.2d|\t\t|%+04.2d|\t|%+04.2d|", "%+04.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+02.2d|\t\t|%+02.2d|\t|%+02.2d|", "%+02.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+02.5d|\t|%+02.5d|\t|%+02.5d|", "%+02.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-d|\t\t|%+-d|\t|%+-d|", "%+-d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|", "%+-1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|", "%+-2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|", "%+-4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2.0d|\t\t|%+-2.0d|\t|%+-2.0d|", "%+-2.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2.1d|\t\t|%+-2.1d|\t|%+-2.1d|", "%+-2.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2.5d|\t|%+-2.5d|\t|%+-2.5d|", "%+-2.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.1d|\t\t|%+-4.1d|\t|%+-4.1d|", "%+-4.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.5d|\t|%+-4.5d|\t|%+-4.5d|", "%+-4.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.6d|\t|%+-4.6d|\t|%+-4.6d|", "%+-4.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-6.5d|\t|%+-6.5d|\t|%+-6.5d|", "%+-6.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-6.3d|\t|%+-6.3d|\t|%+-6.3d|", "%+-6.3d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-.0d|\t\t|%+-.0d|\t|%+-.0d|", "%+-.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-.2d|\t|%+-.2d|\t|%+-.2d|", "%+-.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-.5d|\t|%+-.5d|\t|%+-.5d|", "%+-.5d", i, j, k));  fflush(stdout);
	/* Minus */
	printf("~%d~\n", PRINTER("%-8s|%-d|\t\t|%-d|\t|%-d|\n", "%-d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-.1d|\t\t|%-.1d|\t|%-.1d|\n", "%-.1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-.5d|\t\t|%-.5d|\t|%-.5d|\n", "%-.5d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-1d|\t\t|%-1d|\t|%-1d|\n", "%-1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-1.2d|\t\t|%-1.2d|\t|%-1.2d|\n", "%-1.2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-1.6d|\t|%-1.6d|\t|%-1.6d|\n", "%-1.6d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-2d|\t\t|%-2d|\t|%-2d|\n", "%-2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-2.0d|\t\t|%-2.0d|\t|%-2.0d|\n", "%-2.0d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-4d|\t\t|%-4d|\t|%-4d|\n", "%-4d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-4.2d|\t\t|%-4.2d|\t|%-4.2d|\n", "%-4.2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%-4.6d|\t|%-4.6d|\t|%-4.6d|\n", "%-4.6d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- d|\t\t|%- d|\t|%- d|\n", "%- d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- .1d|\t\t|%- .1d|\t|%- .1d|\n", "%- .1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- .4d|\t\t|%- .4d|\t|%- .4d|\n", "%- .4d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|\n", "%- 1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|\n", "%- 1.1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|\n", "%- 1.5d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|\n", "%- 2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|\n", "%- 4d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 4.1d|\t\t|%- 4.1d|\t|%- 4.1d|\n", "%- 4.1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 4.5d|\t|%- 4.5d|\t|%- 4.5d|\n", "%- 4.5d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%- 6.4d|\t|%- 6.4d|\t|%- 6.4d|\n", "%- 6.4d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-d|\t\t|%+-d|\t|%+-d|\n", "%+-d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|\n", "%+-1d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|\n", "%+-2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-3.2d|\t\t|%+-3.2d|\t|%+-3.2d|\n", "%+-3.2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-2.5d|\t|%+-2.5d|\t|%+-2.5d|\n", "%+-2.5d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|\n", "%+-4d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-4.2d|\t\t|%+-4.2d|\t|%+-4.2d|\n", "%+-4.2d", i, j, k));
	printf("~%d~\n", PRINTER("%-8s|%+-3.5d|\t|%+-3.5d|\t|%+-3.5d|\n", "%+-3.5d", i, j, k));
	/* Spaces */
	printf("~%d~\n", PRINTER("%-8s|% d|\t\t|% d|\t|%d|", "% d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% .1d|\t\t|% .1d|\t|% .1d|", "% .1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% .0d|\t\t|% .0d|\t|% .0d|", "% .0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 3.0d|\t\t|% 3.0d|\t|% 3.0d|", "% 3.0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.0d|\t\t|% 1.0d|\t|% 1.0d|", "% 1.0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 0.0d|\t\t|% 0.0d|\t|% 0.0d|", "% 0.0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% .4d|\t\t|% .4d|\t|% .4d|", "% .4d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.1d|\t\t|% 1.1d|\t|% 1.1d|", "% 1.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.5d|\t|% 1.5d|\t|% 1.5d|", "% 1.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.1d|\t\t|% 4.1d|\t|% 4.1d|", "% 4.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 3.2d|\t\t|% 3.2d|\t|% 3.2d|", "% 3.2d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.5d|\t|% 4.5d|\t|% 4.5d|", "% 4.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 6.3d|\t|% 6.3d|\t|% 6.3d|", "% 6.3d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 6.5d|\t|% 6.5d|\t|% 6.5d|", "% 6.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 6.4d|\t|% 6.4d|\t|% 6.4d|", "% 6.4d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 0d|\t\t|% 0d|\t|% 0d|", "% 0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1d|\t\t|% 1d|\t|% 1d|", "% 1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 2d|\t\t|% 2d|\t|% 2d|", "% 2d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4d|\t\t|% 4d|\t|% 4d|", "% 4d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01d|\t\t|% 01d|\t|% 01d|", "% 01d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 02d|\t\t|% 02d|\t|% 02d|", "% 02d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04d|\t\t|% 04d|\t|% 04d|", "% 04d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 0.1d|\t\t|% 0.1d|\t|% 0.1d|", "% 0.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 0.5d|\t|% 0.5d|\t|% 0.5d|", "% 0.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01.5d|\t|% 01.5d|\t|% 01.5d|", "% 01.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.1d|\t\t|% 04.1d|\t|% 04.1d|", "% 04.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.6d|\t|% 04.6d|\t|% 04.6d|", "% 04.6d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|", "% 05.3d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- d|\t\t|%- d|\t|%- d|", "%- d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|", "%- 1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|", "%- 2d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|", "%- 4d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- .0d|\t\t|%- .0d|\t|%- .0d|", "%- .0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- .1d|\t\t|%- .1d|\t|%- .1d|", "%- .1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- .5d|\t|%- .5d|\t|%- .5d|", "%- .5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|", "%- 1.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|", "%- 1.5d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4.0d|\t\t|%- 4.0d|\t|%- 4.0d|", "%- 4.0d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4.1d|\t\t|%- 4.1d|\t|%- 4.1d|", "%- 4.1d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4.6d|\t|%- 4.6d|\t|%- 4.6d|", "%- 4.6d", i, j, k)); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 6.3d|\t|%- 6.3d|\t|%- 6.3d|", "%- 6.3d", i, j, k)); fflush(stdout);
	/* Width */
	printf("~%d~\n", PRINTER(printf("%-8s|%1d|\t\t|%1d|\t|%1d|\n", "%1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%2d|\t\t|%2d|\t|%2d|\n", "%2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%4d|\t\t|%4d|\t|%4d|\n", "%4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 1d|\t\t|% 1d|\t|% 1d|\n", "% 1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 1.1d|\t\t|% 1.1d|\t|% 1.1d|\n", "% 1.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 1.5d|\t|% 1.5d|\t|% 1.5d|\n", "% 1.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 2d|\t\t|% 2d|\t|% 2d|\n", "% 2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 4d|\t\t|% 4d|\t|% 4d|\n", "% 4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 4.5d|\t|% 4.5d|\t|% 4.5d|\n", "% 4.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 4.1d|\t\t|% 4.1d|\t|% 4.1d|\n", "% 4.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 6.4d|\t|% 6.4d|\t|% 6.4d|\n", "% 6.4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 01.5d|\t|% 01.5d|\t|% 01.5d|\n", "% 01.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 01d|\t\t|% 01d|\t|% 01d|\n", "% 01d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 04d|\t\t|% 04d|\t|% 04d|\n", "% 04d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 02d|\t\t|% 02d|\t|% 02d|\n", "% 02d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 04.1d|\t\t|% 04.1d|\t|% 04.1d|\n", "% 04.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 04.5d|\t|% 04.5d|\t|% 04.5d|\n", "% 04.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%01d|\t\t|%01d|\t|%01d|\n", "%01d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%01.4d|\t\t|%01.4d|\t|%01.4d|\n", "%01.4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%02d|\t\t|%02d|\t|%02d|\n", "%02d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%04d|\t\t|%04d|\t|%04d|\n", "%04d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%04.6d|\t|%04.6d|\t|%04.6d|\n", "%04.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%06.4d|\t|%06.4d|\t|%06.4d|\n", "%06.4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|\n", "%- 1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|\n", "%- 1.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|\n", "%- 1.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|\n", "%- 2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|\n", "%- 4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 4.5d|\t|%- 4.5d|\t|%- 4.5d|\n", "%- 4.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%- 6.4d|\t|%- 6.4d|\t|%- 6.4d|\n", "%- 6.4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|\n", "%+-1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|\n", "%+-2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-3.2d|\t\t|%+-3.2d|\t|%+-3.2d|\n", "%+-3.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-3.5d|\t|%+-3.5d|\t|%+-3.5d|\n", "%+-3.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|\n", "%+-4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-4.0d|\t\t|%+-4.0d|\t|%+-4.0d|\n", "%+-4.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-4.2d|\t\t|%+-4.2d|\t|%+-4.2d|\n", "%+-4.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-4.6d|\t|%+-4.6d|\t|%+-4.6d|\n", "%+-4.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+-6.3d|\t|%+-6.3d|\t|%+-6.3d|\n", "%+-6.3d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-1d|\t\t|%-1d|\t|%-1d|\n", "%-1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-1.2d|\t\t|%-1.2d|\t|%-1.2d|\n", "%-1.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-1.6d|\t|%-1.6d|\t|%-1.6d|\n", "%-1.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-2d|\t\t|%-2d|\t|%-2d|\n", "%-2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-4d|\t\t|%-4d|\t|%-4d|\n", "%-4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-4.2d|\t\t|%-4.2d|\t|%-4.2d|\n", "%-4.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%-4.6d|\t|%-4.6d|\t|%-4.6d|\n", "%-4.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+04d|\t\t|%+04d|\t|%+04d|\n", "%+04d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+02d|\t\t|%+02d|\t|%+02d|\n", "%+02d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+2d|\t\t|%+2d|\t|%+2d|\n", "%+2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+4d|\t\t|%+4d|\t|%+4d|\n", "%+4d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+3.6d|\t|%+3.6d|\t|%+3.6d|\n", "%+3.6d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%+6.3d|\t|%+6.3d|\t|%+6.3d|\n", "%+6.3d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%1.1d|\t\t|%1.1d|\t|%1.1d|\n", "%1.1d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%1.5d|\t\t|%1.5d|\t|%1.5d|\n", "%1.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%4.2d|\t\t|%4.2d|\t|%4.2d|\n", "%4.2d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%4.0d|\t\t|%4.0d|\t|%4.0d|\n", "%4.0d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%4.5d|\t\t|%4.5d|\t|%4.5d|\n", "%4.5d", i, j, k));  fflush(stdout);
	printf("~%d~\n", PRINTER(printf("%-8s|%5.4d|\t\t|%5.4d|\t|%5.4d|\n", "%5.4d", i, j, k));  fflush(stdout);
	/*  */
	printf("~%d~\n", PRINTER("\n%-8s|%1d|\t\t|%1d|\t|%1d|\n", "%1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%2d|\t\t|%2d|\t|%2d|\n", "%2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4d|\t\t|%4d|\t|%4d|\n", "%4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1d|\t\t|% 1d|\t|% 1d|\n", "% 1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.1d|\t\t|% 1.1d|\t|% 1.1d|\n", "% 1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 1.5d|\t|% 1.5d|\t|% 1.5d|\n", "% 1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 2d|\t\t|% 2d|\t|% 2d|\n", "% 2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4d|\t\t|% 4d|\t|% 4d|\n", "% 4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.5d|\t|% 4.5d|\t|% 4.5d|\n", "% 4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 4.1d|\t\t|% 4.1d|\t|% 4.1d|\n", "% 4.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 6.4d|\t|% 6.4d|\t|% 6.4d|\n", "% 6.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01.5d|\t|% 01.5d|\t|% 01.5d|\n", "% 01.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 01d|\t\t|% 01d|\t|% 01d|\n", "% 01d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04d|\t\t|% 04d|\t|% 04d|\n", "% 04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 02d|\t\t|% 02d|\t|% 02d|\n", "% 02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.1d|\t\t|% 04.1d|\t|% 04.1d|\n", "% 04.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 04.5d|\t|% 04.5d|\t|% 04.5d|\n", "% 04.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|% 05.3d|\t\t|% 05.3d|\t|% 05.3d|\n", "% 05.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%01d|\t\t|%01d|\t|%01d|\n", "%01d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%01.4d|\t\t|%01.4d|\t|%01.4d|\n", "%01.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%02d|\t\t|%02d|\t|%02d|\n", "%02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%04d|\t\t|%04d|\t|%04d|\n", "%04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%04.6d|\t|%04.6d|\t|%04.6d|\n", "%04.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%06.4d|\t|%06.4d|\t|%06.4d|\n", "%06.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1d|\t\t|%- 1d|\t|%- 1d|\n", "%- 1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.1d|\t\t|%- 1.1d|\t|%- 1.1d|\n", "%- 1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 1.5d|\t|%- 1.5d|\t|%- 1.5d|\n", "%- 1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 2d|\t\t|%- 2d|\t|%- 2d|\n", "%- 2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4d|\t\t|%- 4d|\t|%- 4d|\n", "%- 4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 5.3d|\t\t|%- 5.3d|\t|%- 5.3d|\n", "%- 5.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 4.5d|\t|%- 4.5d|\t|%- 4.5d|\n", "%- 4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%- 6.4d|\t|%- 6.4d|\t|%- 6.4d|\n", "%- 6.4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-1d|\t\t|%+-1d|\t|%+-1d|\n", "%+-1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-2d|\t\t|%+-2d|\t|%+-2d|\n", "%+-2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-3.2d|\t\t|%+-3.2d|\t|%+-3.2d|\n", "%+-3.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-3.5d|\t|%+-3.5d|\t|%+-3.5d|\n", "%+-3.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4d|\t\t|%+-4d|\t|%+-4d|\n", "%+-4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.0d|\t\t|%+-4.0d|\t|%+-4.0d|\n", "%+-4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.2d|\t\t|%+-4.2d|\t|%+-4.2d|\n", "%+-4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-4.6d|\t|%+-4.6d|\t|%+-4.6d|\n", "%+-4.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+-6.3d|\t|%+-6.3d|\t|%+-6.3d|\n", "%+-6.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1d|\t\t|%-1d|\t|%-1d|\n", "%-1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1.2d|\t\t|%-1.2d|\t|%-1.2d|\n", "%-1.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-1.6d|\t|%-1.6d|\t|%-1.6d|\n", "%-1.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-2d|\t\t|%-2d|\t|%-2d|\n", "%-2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4d|\t\t|%-4d|\t|%-4d|\n", "%-4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4.2d|\t\t|%-4.2d|\t|%-4.2d|\n", "%-4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%-4.6d|\t|%-4.6d|\t|%-4.6d|\n", "%-4.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+04d|\t\t|%+04d|\t|%+04d|\n", "%+04d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+02d|\t\t|%+02d|\t|%+02d|\n", "%+02d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+2d|\t\t|%+2d|\t|%+2d|\n", "%+2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4d|\t\t|%+4d|\t|%+4d|\n", "%+4d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+4.0d|\t\t|%+4.0d|\t|%+4.0d|\n", "%+4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+3.6d|\t|%+3.6d|\t|%+3.6d|\n", "%+3.6d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%+6.3d|\t|%+6.3d|\t|%+6.3d|\n", "%+6.3d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%1.1d|\t\t|%1.1d|\t|%1.1d|\n", "%1.1d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%1.5d|\t\t|%1.5d|\t|%1.5d|\n", "%1.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.2d|\t\t|%4.2d|\t|%4.2d|\n", "%4.2d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.0d|\t\t|%4.0d|\t|%4.0d|\n", "%4.0d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%4.5d|\t\t|%4.5d|\t|%4.5d|\n", "%4.5d", i, j, k); fflush(stdout);
	printf("~%d~\n", PRINTER("%-8s|%5.4d|\t\t|%5.4d|\t|%5.4d|\n", "%5.4d", i, j, k); fflush(stdout);
	/* Undefined ? */
		// printf("~%d~\n", PRINTER("|%#.15Lf|", -0.000000)); fflush(stdout);
		// printf("~%d~\n", PRINTER("|%f|", 1.0 / 0)); fflush(stdout);
		// printf("~%d~\n", PRINTER("|%|")); fflush(stdout);

	fclose(printf_file);

	return (0);
}
