/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/07 16:18:27 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:39:47 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
t_list *n1 = ft_lstnew("first");
t_list *n2 = ft_lstnew("second");
n1->next = n2;

printf("ft_lstsize: %d (Expected: 2)\n", ft_lstsize(n1));
free(n1);
free(n2);
return 0;
}
*/
