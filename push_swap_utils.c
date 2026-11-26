/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   push_swap_utils.c                                 :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: dnasrall <dnasrall@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/16 17:02:43 by dnasrall         #+#    #+#              */
/*   Updated: 2026/11/16 17:23:36 by dnasrall        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	swap_stack(t_stack *stack)
{
	t_node	*ptr1;
	t_node	*ptr2;
	t_node	*ptr3;

	if (stack->top == NULL || stack->top->next == NULL)
		return (0);
	ptr1 = stack->top;
	ptr2 = stack->top->next;
	ptr3 = ptr2->next;
	if (ptr3 != NULL)
		ptr3->prev = ptr1;
	if (stack->bottom == ptr2)
		stack->bottom = ptr1;
	ptr1->next = ptr2->next;
	ptr1->prev = ptr2;
	ptr2->next = ptr1;
	ptr2->prev = NULL;
	stack->top = ptr2;
	return (1);
}
int take_put(t_stack *stack_d,t_stack *stack_s)
{
	t_node *s;
	t_node *d;

	s=stack_s->top;
	d = stack_d->top;
	if(s == NULL)
	return (0);
	stack_s->top=s->next;
	if(s->next != NULL)
			stack_s->top->prev=NULL;
	else
			stack_s->bottom=NULL;
	stack_d->top = s;
	if(d== NULL)
		stack_d->bottom=s;
	else
		d->prev=stack_d->top;
	s->next=d;
	stack_d->size++;
	stack_s->size--;
	return (1);
}
