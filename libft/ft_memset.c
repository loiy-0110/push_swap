/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:30:48 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:54:16 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	size_t			nb;

	nb = n;
	p = s;
	while (nb > 0)
	{
		*p = (unsigned char) c;
		p++;
		nb--;
	}
	return (s);
}
/*
#include <stdio.h>

int main(void) {
char buffer[10] = "abcdefgh";
ft_memset(buffer, 'x', 4);
printf("ft_memset: %s (Expected: xxxxefgh)\n", buffer);
return 0;
}
*/
