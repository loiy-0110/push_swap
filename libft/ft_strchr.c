/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:26:51 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:30:09 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if ((char) c == '\0')
	{
		while (s[i])
			i++;
		return ((char *) & s[i]);
	}
	while (s[i])
	{
		if ((char) s[i] == (char) c)
			return ((char *) & s[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void) {
char *s = "trip,it";
printf("ft_strchr: %s (Expected: ,it)\n", ft_strchr(s, ','));
return 0;
}
*/
