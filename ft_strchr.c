/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:53:38 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/23 12:38:21 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	ct;

	ct = 0;
	while (str[ct])
	{
		if (str[ct] == (char)c)
			return ((char *)&str[ct]);
		ct++;
	}
	if ((char)c == '\0')
		return ((char *)&str[ct]);
	return (0);
}
