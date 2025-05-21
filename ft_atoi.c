/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:05:19 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:28:26 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_space(char s)
{
	return ((s >= 9 && s <= 13) || s == 32);
}

int	ft_is_num(char s)
{
	return (s >= 48 && s <= 57);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	result;

	neg = 1;
	result = 0;
	while (ft_is_space(*str))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (ft_is_num(*str))
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * neg);
}
