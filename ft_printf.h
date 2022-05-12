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

#define FORMATS "cspx"

typedef struct s_flags
{
	va_list args;
	int width;
	int zero;
	int hash;

} t_flags;

typedef void handler_func(t_flags *tab);

int		ft_printf(const char *format, ...);

void	c_handler(t_flags *tab);
void	s_handler(t_flags *tab);
void	p_handler(t_flags *tab);
void	x_handler(t_flags *tab);
void	d_handler(t_flags *tab);


char	*ft_itoa_base(int dec, int base);
void	put_ptr(uintptr_t addr);


#endif