/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: labusheh <labusheh@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/05 17:49:20 by labusheh          #+#    #+#             */
/*   Updated: 2026/10/22 02:28:26 by labusheh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*
#include <unistd.h>

int main(void) {
ft_putendl_fd("Line 1", 1); // Expected: Prints "Line 1" followed by a newline
return 0;
}
*/
