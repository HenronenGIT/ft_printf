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
	if (tab->l)
		*ptr_nb = (long)*ptr_nb;

}