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

void    string_handler(char *str)
{
    printf("%s\n", str);
    ft_putstr(str);
}

int ft_printf(const char *format, ...)
{
    const char *ptr;

    ptr = format;
    va_list args;
    va_start (args, format);
    //printf("%s", va_arg(args, char*));
    while (*ptr != '\0')
    {
        if (*ptr != '%')
        {
            ft_putchar(*ptr);
            ptr++;
            continue;
        }
        //dispatch_tabe(*++ptr);
        //if (*++ptr == 'd')
        if (*ptr + 1 == 'd')
        {
            integer_handler(va_arg(args, int));
        }
        else if (*ptr + 1 == 's')
        {
            printf("here");
            printf("%s", va_arg(args, char*));
        }
            //string_handler(va_arg(args, char*));
        ptr++;
    }
    return (0);
}