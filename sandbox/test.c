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

int foo (int num_args, ...)
{
    va_list args;
    va_start(args, num_args);
    
    for (int i = 0; i < num_args; i++)
    {
        printf("%d\n", va_arg(args, int));

    }
    va_end(args);
    return (0);

}

int main (void)
{

    foo(4, 21, 42, 12, 16);
    return (0);
}
