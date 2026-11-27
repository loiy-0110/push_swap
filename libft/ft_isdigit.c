/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:33:59 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:05:19 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_isdigit('5'): %d (Expected: non-zero)\n", ft_isdigit('5'));
printf("ft_isdigit('a'): %d (Expected: 0)\n", ft_isdigit('a'));
return 0;
}
*/
