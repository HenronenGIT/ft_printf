/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:49:18 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/09 10:49:19 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//void    read_specifiers(char ch)
//{
//    if ()

//void    dispatch_table(char ch)
//{
//    void (*handler[]()) = {decimal, string};
//    
//
//}

void    integer_handler(int nb)
{
    ft_putstr(ft_itoa(nb));
}

int ft_printf(const char *format, ...)
{
    int i;
    char letter;
    const char *ptr;


    ptr = format;
    va_list args;
    va_start (args, format);

    i = 0;
    while (*ptr != '\0')
    {
        //letter = format[i];
        if (*ptr != '%')
        {
            ft_putchar(*ptr);
            ptr++;
            //i++;
            continue;
        }
        //dispatch_tabe(*++ptr);
        if (*++ptr == 'd')
        {
            integer_handler(va_arg(args, int));
        }
        ptr++;
    }
    return (0);
}