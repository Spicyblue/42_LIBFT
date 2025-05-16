/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 14:59:59 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/16 15:00:23 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if (c == EOF)
		return (0);
	if ('a' <= c && c <= 'z')
		return (1);
	if ('A' <= c && c <= 'Z')
		return (1);
	return (0);
}
