/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:52:59 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:46:18 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tem;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tem = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tem;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del_content(void *content) {
free(content);
}

int main(void) {
t_list *head = ft_lstnew(strdup("one"));
ft_lstadd_back(&head, ft_lstnew(strdup("two")));

ft_lstclear(&head, del_content);
if (head == NULL)
printf("ft_lstclear: SUCCESS (List cleared)\n");
return 0;
}
*/
