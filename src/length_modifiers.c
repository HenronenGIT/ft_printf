/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length_modifiers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 15:34:28 by hmaronen          #+#    #+#             */
/*   Updated: 2022/05/24 15:34:29 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	length_modifiers(t_flags *tab, long long *number_ptr)
{
	if (tab->h)
		*number_ptr = (short)*number_ptr;
	else if (tab->hh)
		*number_ptr = (char)*number_ptr;
	else if (tab->l)
		*number_ptr = (long)*number_ptr;
	else if (tab->ll)
		*number_ptr = (long long)*number_ptr;
	else
		*number_ptr = (int)*number_ptr;
}

void	unsigned_length_modifiers(t_flags *tab, unsigned long long *number_ptr)
{
	if (tab->h)
		*number_ptr = (unsigned short)*number_ptr;
	else if (tab->hh)
		*number_ptr = (unsigned char)*number_ptr;
	else if (tab->l)
		*number_ptr = (unsigned long)*number_ptr;
	else if (tab->ll)
		*number_ptr = (unsigned long long)*number_ptr;
	else
		*number_ptr = (unsigned int)*number_ptr;
}

void	double_length_modifiers(t_flags *tab, double *number_ptr)
{
	if (tab->l)
		*number_ptr = (unsigned long)*number_ptr;
	else if (tab->ll)
		*number_ptr = (unsigned long long)*number_ptr;
	else
		*number_ptr = (unsigned int)*number_ptr;
}