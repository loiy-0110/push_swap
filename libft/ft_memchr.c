/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 13:38:42 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 00:07:08 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;
	size_t				i;

	p = s;
	i = 0;
	while (n > i)
	{
		if (p[i] == (unsigned char) c)
			return ((void *) & p[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void) {
char s[] = "hello world";
printf("ft_memchr: %s (Expected: o world)\n", (char *)ft_memchr(s, 'o', 10));
return 0;
}
*/
