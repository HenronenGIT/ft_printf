/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaronen <hmaronen@student.Hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 20:57:56 by hmaronen          #+#    #+#             */
/*   Updated: 2022/06/22 20:57:58 by hmaronen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	handler_func	*conv_arr[11] = {
		c_handler,
		s_handler,
		p_handler,
		d_handler,
		i_handler,
		o_handler,
		u_handler,
		x_handler,
		X_handler,
		f_handler,
		percent_handler
	};
}
