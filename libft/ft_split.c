/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 18:47:16 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 01:56:42 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (count);
}

static char	*ft_dup_word(const char *s, char c)
{
	int		len;
	int		i;
	char	*word;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = (char *) malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	**ft_free_split(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		j;

	if (!s)
		return (NULL);
	tab = (char **) malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			tab[j] = ft_dup_word(s, c);
			if (!tab[j])
				return (ft_free_split(tab, j));
			j++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	tab[j] = NULL;
	return (tab);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
char **res = ft_split("hello!world!42", '!');
int i = 0;
while (res[i]) {
printf("res[%d]: %s\n", i, res[i]);
free(res[i]);
i++;
}
free(res);
// Expected: hello, world, 42 on separate lines
return 0;
}
*/
