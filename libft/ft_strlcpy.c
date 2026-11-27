/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:52:27 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:14:15 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	src_len = 0;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[src_len] != '\0')
		src_len++;
	return (src_len);
}
/*
#include <stdio.h>

int main(void) {
char dest[10];
size_t ret = ft_strlcpy(dest, "Hello", sizeof(dest));
printf("dest: %s, return: %zu (Expected: Hello, 5)\n", dest, ret);
return 0;
}

*/
