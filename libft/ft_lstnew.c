/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 15:32:57 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:40:28 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *) malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
char *str = "Hello 42";
t_list *node = ft_lstnew(str);

if (node && node->content == str && node->next == NULL)
printf("ft_lstnew: SUCCESS\n");
else
printf("ft_lstnew: FAILED\n");
free(node);
return 0;
}
*/
