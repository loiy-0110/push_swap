/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   parce.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/14 23:22:53 by labusheh         #+#    #+#              */
/*   Updated: 2026/11/15 00:08:16 by labusheh        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str)
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
}
