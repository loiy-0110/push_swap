/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:40:22 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:05:01 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_isascii(127): %d (Expected: non-zero)\n", ft_isascii(127));
printf("ft_isascii(128): %d (Expected: 0)\n", ft_isascii(128));
return 0;
}
*/
