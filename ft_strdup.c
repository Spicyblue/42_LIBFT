/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/16 13:31:55 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/16 14:21:16 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

char	*ft_strdup(const char *str)
{
	const char	*src;
	char			*cpy;
	char			*dst;
	size_t			len;

	if (str == NULL)
		return (NULL);
	len = 0;
	src = str;
	while (*src)
	{
		len++;
		src++;
	}
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	src = str;
	dst = cpy;
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (cpy);
}
