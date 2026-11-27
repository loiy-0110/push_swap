/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 16:17:41 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:26:34 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <unistd.h>

int main(void) {
ft_putchar_fd('X', 1); // Expected: Prints 'X' to standard output
ft_putchar_fd('\n', 1);
return 0;
}
*/
