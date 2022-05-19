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

#define FORMATS "cspdiouxX"

typedef struct s_flags
{
	va_list args;
	int width;
	int zero;
	int plus;
	int minus;
	int hash;
	int	ll;
	//int is_neg;

} t_flags;

typedef void handler_func(t_flags *tab);

int		ft_printf(const char *format, ...);
char	check_flags(t_flags *tab, const char *str, char format);

void	c_handler(t_flags *tab);
void	s_handler(t_flags *tab);
void	p_handler(t_flags *tab);
void	d_handler(t_flags *tab);
void	i_handler(t_flags *tab);
void	o_handler(t_flags *tab);
void	u_handler(t_flags *tab);
void	x_handler(t_flags *tab);
void	X_handler(t_flags *tab);

//char	*ft_itoa_base(int dec, int base);
char	*ft_itoa_base(unsigned int dec, int base);
void	put_ptr(uintptr_t addr);
void	putpadding(int width, char ch);

#endif