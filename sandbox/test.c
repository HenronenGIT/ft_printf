/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 14:02:00 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/09 14:02:01 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

/* strrev
char    *ft_strrev(char *str)
{
	char	*rev_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	rev_str = ft_strnew(i);
	while (i >= 0)
		rev_str[j++] = str[--i];
	return(rev_str);
}

int main (void)
{
	int test;
	char *str = "Hello";

	printf("%s\n", ft_strrev(str));
	return (0);
}
*/

void	ft_putmany(char ch, int count)
{
	write(1, &ch, count);
}

void	ft_putstr(char const *str)
{
	if (!str)
		return ;
	write(1, str, ft_strlen(str));
}

int main (void)
{
	char str[100] = "This is a string";
	ft_putstr(str);
	//ft_putmany('0', 5);
	return (0);
}
