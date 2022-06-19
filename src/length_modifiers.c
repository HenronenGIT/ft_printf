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

void	length_modifiers(t_flags *tab, long long *ptr_nb)
{
	if (tab->h)
		*ptr_nb = (short)*ptr_nb;
	else if (tab->hh)
		*ptr_nb = (char)*ptr_nb;
	else if (tab->l)
		*ptr_nb = (long)*ptr_nb;
	else if (tab->ll)
		*ptr_nb = (long long)*ptr_nb;
	else
		*ptr_nb = (int)*ptr_nb;
}

void	unsigned_length_modifiers(t_flags *tab, unsigned long long *ptr_nb)
{
	if (tab->h)
		*ptr_nb = (unsigned short)*ptr_nb;
	else if (tab->hh)
		*ptr_nb = (unsigned char)*ptr_nb;
	else if (tab->l)
		*ptr_nb = (unsigned long)*ptr_nb;
	else if (tab->ll)
		*ptr_nb = (unsigned long long)*ptr_nb;
	else
		*ptr_nb = (unsigned int)*ptr_nb;
}