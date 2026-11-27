/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/04 18:54:27 by labusheh         #+#    #+#              */
/*   Updated: 2026/10/23 02:39:58 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*z;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size != 0 && count > ((size_t) - 1) / size)
		return (NULL);
	z = malloc(count * size);
	if (!z)
		return (NULL);
	ft_bzero(z, count * size);
	return (z);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
int *arr = (int *)ft_calloc(5, sizeof(int));
if (arr) {
printf("ft_calloc allocated successfully and zero-initialized.\n");
free(arr);
}
return 0;
}
*/
