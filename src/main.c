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

//#include <limits.h>
//#include <float.h>

int	main(void)
{
	/* Empty spaces leftside */
	//printf("|%5d|\n", 21); 
	//printf("|%5i|\n", 21);
	//printf("|%5o|\n", 21); /* Octal ? */
	//printf("|%5u|\n", 21);
	//printf("|%5x|\n", 21); /* Hexa ? */
	//printf("|%5x|\n", 11); /* Hexa ? */
	//
	///* Empty spaces rightside */
	//printf("|%-5d|\n", 42);

	///* Pad with zeroes */
	//printf("|%05d|\n", 42);

	///* Plus sign to every positive number*/
	//printf("|%+5d|\n", 42);
	//printf("|%+5d|\n", -42);

	/* %d */
	//int nb = 42;
	//printf("|Hello world %d|\n", nb);
	//ft_printf("|Hello world %d|\n", nb);
//
	//printf("|Hello world %d, this is test!|\n", nb);
	//ft_printf("|Hello world %d, this is test!|\n", nb);

	/* %s */
	char *str = "This is a String!";
	ft_printf("|Hive %s|\n", str);
	//printf("|Hive %s|\n", str);
	/* PANIC */
	//printf("%02147483646d", 1);




}