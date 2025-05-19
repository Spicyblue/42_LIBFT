/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:51:00 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/19 17:45:54 by okochulo         ###   ########.fr       */
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

void	ft_cpystr(char *dest, const char *src, size_t dest_ct)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[dest_ct + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	len1;
	size_t	len2;
	size_t	tot_len;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_get_strlen(s1);
	len2 = ft_get_strlen(s2);
	tot_len = len1 + len2;
	new_str = (char *)malloc(sizeof(char) * (tot_len + 1));
	if (new_str == NULL)
		return (NULL);
	ft_cpystr(new_str, s1, 0);
	ft_cpystr(new_str, s2, len1);
	new_str[tot_len] = '\0';
	return (new_str);
}
