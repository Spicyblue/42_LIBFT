/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:00:37 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:49:11 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char	*ft_cpystr(char *dst, const char *src)
{
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char			*cpy;
	size_t			len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	ft_cpystr(cpy, str);
	return (cpy);
}
