/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 15:42:13 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 00:09:33 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*n1;
	const unsigned char	*n2;
	size_t				i;

	i = 0;
	n1 = (const unsigned char *) s1;
	n2 = (const unsigned char *) s2;
	if (n == 0)
		return (0);
	while ((i < n - 1) && n1[i] == n2[i])
		i++;
	return (n1[i] - n2[i]);
}

/*
#include <stdio.h>

int main(void) {
printf("ft_memcmp: %d (Expected: 0)\n", ft_memcmp("abcdef", "abcxyz", 3));
return 0;
}
*/
