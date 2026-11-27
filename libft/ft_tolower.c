/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:57:37 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:04:38 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_tolower('A'): %c (Expected: a)\n", ft_tolower('A'));
printf("ft_tolower('z'): %c (Expected: z)\n", ft_tolower('z'));
return 0;
}*/
