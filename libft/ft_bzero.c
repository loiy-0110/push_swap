/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 19:49:32 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 00:00:39 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			nb;

	nb = 0;
	p = s;
	while (n > nb)
	{
		p[nb] = 0;
		nb++;
	}
}

/*
#include <stdio.h>

int main(void) {
char buffer[10] = "abcdefgh";
ft_bzero(buffer, 3);
printf("ft_bzero first 3 bytes zeroed out (check null or bytes)\n");
return 0;
}
*/
