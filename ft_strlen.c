/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:00:47 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 16:03:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int	ct;

	ct = 0;
	while (str[ct])
	{
		ct++;
	}
	return (ct);
}
