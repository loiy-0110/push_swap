/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:52:10 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:04:32 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_toupper('a'): %c (Expected: A)\n", ft_toupper('a'));
printf("ft_toupper('Z'): %c (Expected: Z)\n", ft_toupper('Z'));
return 0;
}
*/
