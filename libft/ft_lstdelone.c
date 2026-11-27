/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:44:50 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:45:24 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void del_content(void *content) {
free(content);
}

int main(void) {
char *str = strdup("dynamic");
t_list *node = ft_lstnew(str);

ft_lstdelone(node, del_content);
printf("ft_lstdelone executed successfully.\n");
return 0;
}
*/
