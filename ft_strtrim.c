/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 17:01:12 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/19 17:44:46 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_get_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	ft_char_in_str(char c, const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trims;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_get_strlen(s1);
	while (s1[start] && ft_char_in_str(s1[start], set))
		start++;
	while (end > start && ft_char_in_str(s1[end - 1], set))
		end --;
	trims = (char *)malloc(sizeof(char) * (end - start + 1));
	if (trims == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trims[i] = s1[start];
		i++;
		start++;
	}
	trims[i] = '\0';
	return (trims);
}
