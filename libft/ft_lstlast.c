/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:21:59 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:41:06 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
t_list *n1 = ft_lstnew("first");
t_list *n2 = ft_lstnew("last");
n1->next = n2;

t_list *last = ft_lstlast(n1);
printf("ft_lstlast: %s (Expected: last)\n", (char *)last->content);
free(n1);
free(n2);
return 0;
}
*/
