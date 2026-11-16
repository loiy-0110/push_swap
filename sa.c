/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   sa.c                                              :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dnasrall <dnasrall@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/16 14:57:55 by dnasrall         #+#    #+#              */
/*   Updated: 2026/11/16 16:36:33 by dnasrall        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_data *data)
{
	t_node	*ptr1;
	t_node	*ptr2;
	t_node	*ptr3;

	if (data->b->top == NULL || data->b->top->next == NULL)
		return ;
	ptr1 = data->b->top;
	ptr2 = data->b->top->next;
	ptr3 = ptr2->next;
	if (ptr3 != NULL)
		ptr3->prev = ptr1;
	if (data->b->bottom == ptr2)
		data->b->bottom = ptr1;
	ptr1->next = ptr2->next;
	ptr1->prev = ptr2;
	ptr2->next = ptr1;
	ptr2->prev = NULL;
	data->b->top = ptr2;
	data->counter.sa++;
}
