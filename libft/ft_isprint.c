/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:44:42 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:05:57 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(void) {
printf("ft_isprint(' '): %d (Expected: non-zero)\n", ft_isprint(' '));
printf("ft_isprint('\\n'): %d (Expected: 0)\n", ft_isprint('\n'));
return 0;
}
*/
