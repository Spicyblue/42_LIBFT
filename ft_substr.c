/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 15:50:40 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/19 15:50:50 by okochulo         ###   ########.fr       */
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	str_len;
	size_t	tot_len;

	i = 0;
	if (s == NULL)
		return (NULL);
	str_len = ft_get_strlen(s);
	if (start >= str_len)
		tot_len = 0;
	else if (start + len > str_len)
		tot_len = str_len - start;
	else
		tot_len = len;
	sub = (char *)malloc(sizeof(char) * (tot_len + 1));
	if (sub == NULL)
		return (NULL);
	while (i < tot_len && s[start + i] != '\0')
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
