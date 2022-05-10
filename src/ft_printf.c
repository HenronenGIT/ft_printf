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
    ft_putstr(str);
}

void    pointer_handler(void *ptr)
{
    
    printf("%p\n",  ptr);
}

void    check_flag(const char **str)
{
    // Go trough string until no flag anymore.
    while (*str )
    printf("%s\n", *str);
}

int ft_printf(const char *format, ...)
{
    const char *ptr;

    ptr = format;
    va_list args;
    va_start (args, format);
    while (*ptr != '\0')
    {
        if (*ptr != '%')
        {
            ft_putchar(*ptr);
            ptr++;
            continue;
        }
        //dispatch_tabe(*++ptr);
        ptr++; /* Might need error checking what comes after % */
        if (*ptr == 'd')
        {
            integer_handler(va_arg(args, int));
        }
        else if (*ptr == 's')
        {
            string_handler(va_arg(args, char*));
        }
        else if (*ptr == 'p')
        {
            pointer_handler(va_arg(args, void*));
        }
        else /* If after % is flag */
        {
            check_flag(&ptr);

        }
        ptr++;
    }
    return (0);
}
