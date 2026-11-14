/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   parce.c                                           :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: labusheh <labusheh@student.42amman.com>   #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/14 23:22:53 by labusheh         #+#    #+#              */
/*   Updated: 2026/11/15 00:27:10 by labusheh        ###   ########.fr        */
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
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atol_check(char *str, int *error)
{
	long	res;
	int		sign;
	int		i;

	res = 0;
	sign = 1;
	i = 0;
	if (!is_valid(str))
	{
		*error = 1;
		return (0);
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - '0');
		if ((res * sign) > 2147483647 || (res * sign) < -2147483648)
		{
			*error = 1;
			return (0);
		}
		i++;
	}
	return (res * sign);
}

int	if_dublicate(int *arr, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (arr[i] == arr[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	print_error_and_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
