/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:33:55 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/21 23:04:50 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(void) {
printf("ft_isalnum('z'): %d (Expected: non-zero)\n", ft_isalnum('z'));
printf("ft_isalnum('#'): %d (Expected: 0)\n", ft_isalnum('#'));
return 0;
}
*/
