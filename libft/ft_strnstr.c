/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 17:47:39 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:46:01 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (little[0] == '\0')
		return ((char *) big);
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while ((i + j) < len && little[j] == big[i + j])
		{
			j++;
			if (little[j] == '\0')
				return ((char *) & big[i]);
		}
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>

int main(void) {
char *big = "lorem ipsum dolor sit amet";
printf("strnstr:%s(Exp: ipsum dolor sit amet)\n", ft_strnstr(big, "ipsum", 30));
return 0;
}

*/
