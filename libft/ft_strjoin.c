/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:11:59 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 01:54:29 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len1;
	size_t	len2;

	if (!s1 || !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s1, (len1 + 1));
	ft_strlcat(str, s2, (len1 + len2 + 1));
	return (str);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
char *joined = ft_strjoin("Hello ", "42 Amman");
printf("ft_strjoin: %s (Expected: Hello 42 Amman)\n", joined);
free(joined);
return 0;
}
*/
