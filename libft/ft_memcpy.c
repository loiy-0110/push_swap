/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 11:03:49 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 00:01:18 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				nb;

	nb = n;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	while (nb)
	{
		*d = *s;
		d++;
		s++;
		nb--;
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void) {
char dest[10];
ft_memcpy(dest, "42", 3);
printf("ft_memcpy: %s (Expected: 42)\n", dest);
return 0;
}
*/
