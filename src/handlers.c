/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:57:51 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/10 16:57:53 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void    c_handler(t_flags *tab)
{
    ft_putchar(va_arg(tab->args, int));
}

void    d_handler(int nb)
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

void    i_handler()
{

}
