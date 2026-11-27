/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 12:24:30 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 00:03:13 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				nb;

	nb = n;
	d = (unsigned char *) dest;
	s = (const unsigned char *) src;
	if (d > s && ((nb + s) > d))
	{
		while (nb--)
			*(d + nb) = *(s + nb);
	}
	else
	{
		while (nb)
		{
			*d = *s;
			d++;
			s++;
			nb--;
		}
	}
	return (dest);
}

/*
#include <stdio.h>

int main(void) {
char dest[] = "vector";
ft_memmove(dest + 1, dest, 4);
printf("ft_memmove: %s (Expected: vvecto)\n", dest);
return 0;
}
*/
