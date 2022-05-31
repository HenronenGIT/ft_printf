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
#include <limits.h>
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

int main(void)
{
	long long nb;
	nb = -9223372036854775807;
	// nb = (int)nb;
	nb *= -1;
	printf("%lld\n", nb);

  return 0;
}
