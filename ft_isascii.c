/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 15:23:55 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 15:30:17 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isascii(int c)
{
	if (c == EOF)
		return (0);
	if (0 <= c && c <= 127)
		return (1);
	return (0);
}
