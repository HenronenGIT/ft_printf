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

typedef struct s_flags
{
    int space;

} t_flags;

int     ft_printf(const char *format, ...);


#endif