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

t_flags    *count_format_width(const char *str, t_flags *tab)
{
    printf("in count width:%s\n", str);
    return (tab);
}

/* Check which flags exists */
t_flags    *check_format(const char *str, t_flags *tab)
{
    //printf("check format func:%s\n", str);
    // Could make function is_conversion to make cleaner.
        //|| *str != 'i' || *str != 'o' || *str != 'u' || *str != 'x'
        //|| *str != 'X')
    while (*str != 'c')// || *str != 's' || *str != 'p' || *str != 'd'
    {
        if (*str == '0')
        {
            tab->zero = 1;
            break;
        }
        str++;
    }
    if (*str == 'c')
    {
        c_handler(tab);
    }
    //printf("str:%c\n", *str);
    //str++;
    //count_format_width(str, tab);
    return (tab);
}

t_flags *init_tab(t_flags *tab)
{
    tab->zero = 0;
    tab->hash = 0;
    tab->width = 0;

    return (tab);
}

int ft_printf(const char *format, ...)
{
    const char *ptr;
    t_flags *tab;
    //va_list args;
    //va_start (args, format);

    tab = (t_flags *)malloc(sizeof(t_flags));
    if (!tab)
        return (-1);
    init_tab(tab);
    va_start(tab->args, format);
    ptr = format;
    while (*ptr != '\0')
    {
        if (*ptr != '%')
        {
            ft_putchar(*ptr);
            ptr++;
            continue;
        }
        else
        {
            ptr++;
            check_format(ptr, tab);
        }
    //    //dispatch_tabe(*++ptr);
    //    ptr++; /* Might need error checking what comes after % */
    //    if (*ptr == 'd')
    //        d_handler(va_arg(args, int));
    //   // else if (*ptr == ' i')
    //   //     i_handler(va_arg(args, ));
    //    else if (*ptr == 's')
    //        string_handler(va_arg(args, char*));
    //    else if (*ptr == 'p')
    //        pointer_handler(va_arg(args, void*));
    //    else /* If after % is flag */
    //    {
    //        check_flag(&ptr, tab);
    //    }

        ptr++;
    }
    return (0);
}
