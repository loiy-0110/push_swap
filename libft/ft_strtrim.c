/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/05 12:52:52 by labusheh         #+#    #+#              */
/*   Updated: 2026/10/23 03:28:24 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	in(const char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && in(set, s1[start]))
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (end > start && in(set, s1[end - 1]))
		end--;
	return (ft_substr(s1, start, end - start));
}

int	main(void)
{
	printf("%s ", ft_strtrim("abocdaboab", "ab"));
}
