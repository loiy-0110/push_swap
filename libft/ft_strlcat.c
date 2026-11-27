/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:22:12 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:18:39 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	sum;
	size_t	src_len;
	size_t	dst_len;

	i = 0;
	sum = 0;
	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	if (dst_len < size)
		sum = dst_len + src_len;
	else
		return (src_len + size);
	while (src[i] && (dst_len + 1) < size)
		dst[dst_len++] = src[i++];
	dst[dst_len] = '\0';
	return (sum);
}
/*
#include <stdio.h>

int main(void) {
char dest[20] = "Hello ";
size_t ret = ft_strlcat(dest, "World", sizeof(dest));
printf("dest: %s, return: %zu (Expected: Hello World, 11)\n", dest, ret);
return 0;
}
*/
