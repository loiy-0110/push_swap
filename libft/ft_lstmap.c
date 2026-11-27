/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:07:32 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:48:34 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		node = ft_lstnew(content);
		if (!node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, node);
		lst = lst->next;
	}
	return (new_list);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *dup_content(void *content) {
return strdup((char *)content);
}

void del_content(void *content) {
free(content);
}

int main(void) {
t_list *head = ft_lstnew("copy_me");
t_list *new_list = ft_lstmap(head, dup_content, del_content);

printf("ft_lstmap: %s (Expected: copy_me)\n", (char *)new_list->content);

free(head);
free(new_list->content);
free(new_list);
return 0;
}
*/
