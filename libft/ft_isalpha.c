/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/09/29 12:34:04 by labusheh         #+#    #+#              */
/*   Updated: 2026/10/23 02:40:04 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_isalpha('A'): %d (Expected: non-zero)\n", ft_isalpha('A'));
printf("ft_isalpha('1'): %d (Expected: 0)\n", ft_isalpha('1'));
return 0;
}
*/
