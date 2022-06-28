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
#include "./libft/includes/libft.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

#define FORMATS "cspdiouxXf%%"

typedef struct s_flags
{
	/* Could be shorts for less memory? */
	va_list args;
	int width;
	int space;
	int zero;
	int plus;
	int minus;
	int hash;
	int precision;
	int prec_len;
	int	arg_len;
	int	hh;
	int	h;
	int l;
	int ll;
	int	ret_len;
	int is_neg;
	int f;
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
void	f_handler(t_flags *tab);
void	percent_handler(t_flags *tab);

char	*ft_itoa_base(long long dec, int base);
char	*ft_unsigned_itoa_base(unsigned long long dec, int base);
void	put_ptr(uintptr_t addr);
int		putpadding(int width, char ch);

void	plus_flag(t_flags *tab);
void	nb_padding(t_flags *tab, char *argument, char *prefix);
void	length_modifiers(t_flags *tab, long long *ptr_nb);
void	unsigned_length_modifiers(t_flags *tab, unsigned long long *ptr_nb);
void	handle_float(t_flags *tab, char *argument);

char	*ft_anytoa(long long n);

#endif