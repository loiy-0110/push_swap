/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 14:07:37 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:09:39 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	dig(long n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -1 * n;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nb;

	nb = n;
	len = dig(nb);
	str = (char *) malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -1 * nb;
	}
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
char *str = ft_itoa(-2147483648);
printf("ft_itoa: %s (Expected: -2147483648)\n", str);
free(str);
return 0;
}
*/
