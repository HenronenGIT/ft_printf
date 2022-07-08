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
	char *empty;


	char *str = "String!";
	empty = NULL;
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
	if((printf_file=freopen(PRINTER_STR".txt", "w" ,stdout)) == NULL)
	{
		printf("Cannot open printf.txt.\n");
		exit(1);
	}
	// printf("%d\n", PRINTER("|%5.hhu %5.0hhu|", 0, 0)); fflush(stdout);
	// printf("%d\n", PRINTER("|%llu|", 18446744073709551615));; fflush(stdout);
	// printf("~%d~\n", PRINTER("|%0-8.5d|", 32)); fflush(stdout);
	// printf("%d\n", PRINTER("|%|")); fflush(stdout);

	printf("====== Warning tests ======\n"); fflush(stdout);

	//printf("%d\n", PRINTER("|%-05d|", -42)); fflush(stdout);
	//printf("%d\n", PRINTER("|%++ d|", 42)); fflush(stdout);
	// printf("%d\n", PRINTER("|% ++d|", 42)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_min)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_max)); fflush(stdout);
	// printf("%d\n", PRINTER("|%hx|", char_max)); fflush(stdout);
	// printf("%d\n", PRINTER("|%-015x|", 9321124));fflush(stdout);
	// printf("%d\n", PRINTER("|%-015X|", 9321124)); fflush(stdout);
	// printf("%d\n", PRINTER("|%    %|", "test")); fflush(stdout);

	printf("====== c Specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%c|", 'h')); fflush(stdout);;
	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%123c|", 'h')); fflush(stdout);
	printf("%d\n", PRINTER("|%10c%10c|", 'h', 'e')); fflush(stdout);
	printf("%d\n", PRINTER("|%1c|", 'h')); fflush(stdout);
	printf(">>>>>>>>>> - flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10c|", 'h')); fflush(stdout);

	printf("====== s specifier ======\n"); fflush(stdout);
	printf(">>>>>>>>>> Normal <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%s|", NULL)); fflush(stdout);
	printf("%d\n", PRINTER("|%s %s|", NULL, str)); fflush(stdout);

	printf(">>>>>>>>>> Width <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hive %20s|", str)); fflush(stdout);

	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|  %-20s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%-5s %s|", str, str)); fflush(stdout);

	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%10.5s|", "123")); fflush(stdout);
	printf("%d\n", PRINTER("|%.s|", str)); fflush(stdout);
	printf("%d\n", PRINTER("|%.2s is a string|", "")); fflush(stdout);

	printf(">>>>>>>>>> '-' && Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-5.2s is a string|", "")); fflush(stdout);
	printf("%d\n", PRINTER("|%-.2s is a string|", "")); fflush(stdout);

	printf(">>>>>>>>>> Width && Precision <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%5.2s is a string|", "")); fflush(stdout);

	printf("====== d specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%d|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%d %d|", nb, 21)); fflush(stdout);
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
	
	printf("====== u specifier ======\n"); fflush(stdout);
	printf(">>>>>>>>>> Normal <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%u|", neg_nb)); fflush(stdout);
	printf(">>>>>>>>>> ' ' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%10u|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> '0' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%010u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010u|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0u|", nb)); fflush(stdout);

	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10u|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10u|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
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

	printf(">>>>>>>>>> Length modifiers <<<<<<<<<<\n"); fflush(stdout);
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

	printf(">>>>>>>>>> '-' <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10p|", TAB)); fflush(stdout);

	printf(">>>>>>>>>> '.' <<<<<<<<<<\n"); fflush(stdout);
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

	printf(">>>>>>>>>> '.' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%.x %.0x|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%5.2x|", 5427)); fflush(stdout);

	printf(">>>>>>>>>> '#' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%#.x %#.0x|", 0, 0)); fflush(stdout);
	printf("%d %%#x\n", PRINTER("|%#x|", 0)); fflush(stdout);

	printf("====== X specifier ======\n"); fflush(stdout);
	printf(">>>>>>>>>> Normal <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 42)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", int_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", int_max)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", uint_min)); fflush(stdout);
	printf("%d\n", PRINTER("|%X|", uint_max)); fflush(stdout);

	printf(">>>>>>>>>> Lenghth modifiers <<<<<<<<<<\n"); fflush(stdout);
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

	printf(">>>>>>>>>> - flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-15X|", 9321124)); fflush(stdout);
	
	printf(">>>>>>>>>> '#' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%#X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#0X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#015X|", 9321124)); fflush(stdout);
	printf("%d\n", PRINTER("|%#-15X|", 9321124)); fflush(stdout);
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
	printf("%d\n", PRINTER("|%    %|")); fflush(stdout);

	printf("====== o specifier ======\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %o|", neg_nb)); fflush(stdout);
	
	printf(">>>>>>>>>> ' ' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %10o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|Hello world %10o|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> '0' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%010o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%010o|", neg_nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%0o|", nb)); fflush(stdout);

	printf(">>>>>>>>>> '-' flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%-10o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%-10o|", neg_nb)); fflush(stdout);

	printf(">>>>>>>>>> Precision <<<<<<<<<<\n"); fflush(stdout);
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

	printf(">>>>>>>>>> Hash flag <<<<<<<<<<\n"); fflush(stdout);
	printf("%d\n", PRINTER("|%#o|", nb)); fflush(stdout);
	printf("%d\n", PRINTER("|%#o %#0o|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#3o|", 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#7o|", 33)); fflush(stdout);
	printf("%d\n", PRINTER("|%#-7o|", 33)); fflush(stdout);
	printf("%d\n", PRINTER("|%#-7o|", 33)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.o %#.0o|", 0, 0)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.5o|", 5263)); fflush(stdout);
	printf("%d\n", PRINTER("|%#.8o|", nb)); fflush(stdout);
	
	printf(">>>>>>>>>> Lenghth modifiers <<<<<<<<<<\n"); fflush(stdout);
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
	printf("~%d~\n", PRINTER("|%.0f|", 2.51)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 2.5675)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.0f|", 7.4)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.1f|", 0.150000)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.16f|", 1.025978548534310421634)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%.3f|", 1.2395)); fflush(stdout);

	printf(">>>>>>>>>> Zero flag <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%010.1f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%010.5f|", -0.0)); fflush(stdout);
	printf("~%d~\n", PRINTER("|%10.f|", 0.5)); fflush(stdout);

	printf(">>>>>>>>>> Length modifier <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%lf|", 42.42)); fflush(stdout);
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

	printf(">>>>>>>>>> Inf <<<<<<<<<<\n"); fflush(stdout);
	printf("~%d~\n", PRINTER("|%f|", 1.0 / 0)); fflush(stdout);

	fclose(printf_file);
	// system("leaks a.out");
	return (0);
}
