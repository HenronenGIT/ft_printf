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
	
	/* Different flags */

	/* Empty spaces leftside */
	//printf("|%42d|\n", 21);
	ft_printf("|%42d|\n", 21); 
	//printf("|%      42d|\n", 21); 
	//printf("|%5i|\n", 21);
	//printf("|%5o|\n", 21); /* Octal ? */
	//printf("|%5u|\n", 21);
	//printf("|%5x|\n", 21); /* Hexa ? */
	//printf("|%5x|\n", 11); /* Hexa ? */

	/* - */
	//printf("|%-5d|\n", 42);
	
	/* ' ' */
	printf("% d\n", 42);
	printf("% d\n", -42);
	/* Pad with zeroes */
	//printf("|%05d|\n", 42);

	/* Plus sign to every positive number*/
	//printf("|%+5d|\n", 42);
	//printf("|%+5d|\n", -42);

	/* Diff formats */

	/* %d */
	//jint nb = 42;
	//printf("|Hello world %d|\n", nb);
	//ft_printf("|Hello world %d|\n", nb);
//
	//printf("|Hello world %d, this is test!|\n", nb);
	//ft_printf("|Hello world %d, this is test!|\n", nb);
//
	///* %s */
	//char *str = "This is a String!";
	//ft_printf("|Hive %s|\n", str);
	//printf("|Hive %s|\n", str);
//
	///* %p */
	//printf("|%p|\n", str);
	//ft_printf("|%p|\n", str);

	/* PANIC */
	//printf("%02147483646d", 1);




}