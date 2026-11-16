/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ss.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dnasrall <dnasrall@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/16 16:40:30 by dnasrall         #+#    #+#              */
/*   Updated: 2026/11/16 17:23:08 by dnasrall        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_data *data)
{
	int	swap_A;
	int	swap_B;

	swap_A = swap_stack(data->a);
	swap_B = swap_stack(data->b);
	if (swap_A == 1 || swap_B == 1)
		data->counter.ss++;
}
