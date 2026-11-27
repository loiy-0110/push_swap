/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 19:12:02 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:50:59 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s1) + 1;
	s2 = malloc(len * sizeof(char));
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s1, len);
	return (s2);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
char *dup = ft_strdup("libft");
printf("ft_strdup: %s (Expected: libft)\n", dup);
free(dup);
return 0;
}
*/
