/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 17:28:26 by labusheh         #+#    #+#              */
/*   Updated: 2026/10/23 03:39:52 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = NULL;
	if ((char) c == '\0')
	{
		while (s[i])
			i++;
		return ((char *) & s[i]);
	}
	while (s[i])
	{
		if ((char) s[i] == (char) c)
			p = (char *) & s[i];
		i++;
	}
	return (p);
}

/*
#include <stdio.h>

int main(void) {
char *s = "trip,it,it";
printf("ft_strrchr: %s\n", ft_strrchr(s, 't'));
return 0;
}
*/
