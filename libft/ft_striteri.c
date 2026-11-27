/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:08:14 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:24:26 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>

char sample_iter(unsigned int i, char *c) {
*c = *c + i;
}
int main(void) {
char str[] = "aaaa";
ft_striteri(str, sample_iter);
printf("ft_striteri: %s (Expected: abcd)\n", str);
return 0;
}
*/
