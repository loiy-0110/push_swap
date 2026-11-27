/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 17:00:14 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:47:52 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void upper_content(void *content) {
char *str = (char *)content;
while (*str) {
*str = toupper(*str);
str++;
}
}

int main(void) {
char s1[] = "hello";
t_list *head = ft_lstnew(s1);

ft_lstiter(head, upper_content);
printf("ft_lstiter: %s (Expected: HELLO)\n", (char *)head->content);

free(head);
return 0;
}
*/
