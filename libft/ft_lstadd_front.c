/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:07:12 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:32:56 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
t_list *head = ft_lstnew("second");
t_list *new_node = ft_lstnew("first");

ft_lstadd_front(&head, new_node);
printf("ft_lstadd_front head: %s (Expected: first)\n", (char *)head->content);

free(head->next);
free(head);
return 0;
}
*/
