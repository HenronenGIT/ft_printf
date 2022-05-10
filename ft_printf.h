/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 10:39:06 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/09 10:39:09 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h> // temp
#include <libft.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

//typedef void handler_function(void *arg);

typedef struct s_flags
{
    va_list args;
    int width;
    int zero;
    int hash;

} t_flags;

int     ft_printf(const char *format, ...);
void    c_handler(t_flags *tab);
void    d_handler(int nb);
void    pointer_handler(void *ptr);
void    string_handler(char *str);


#endif