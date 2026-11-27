/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 18:06:06 by labusheh         #+#    #+#              */
/*   Updated: 2026/10/23 02:42:55 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	i;
	int	minus;
	int	num;

	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	num = 0;
	minus = 0;
	if (nptr[i] == 45 || nptr[i] == 43)
	{
		if (nptr[i] == 45)
			minus++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	if (minus == 1)
		num = num * -1;
	return (num);
}

/*
#include <stdio.h>

int main(void) {
printf("ft_atoi: %d (Expected: -42)\n", ft_atoi("   -42ab"));
return 0;
}
*/
