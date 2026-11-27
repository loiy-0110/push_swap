/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:27:23 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:42:05 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
t_list *head = ft_lstnew("first");
t_list *new_node = ft_lstnew("second");

ft_lstadd_back(&head, new_node);
printf("lstadd_back last: %s (Exp: second)\n", (char *)head->next->content);

free(head->next);
free(head);
return 0;
}
*/
