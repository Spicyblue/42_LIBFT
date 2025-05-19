/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 18:30:04 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 18:51:49 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	st_ct;
	size_t	tf_ct;

	st_ct = 0;
	if (!to_find[0])
	{
		return ((char *)str);
	}
	while (str[st_ct] && st_ct < len)
	{
		tf_ct = 0;
		while ((st_ct + tf_ct) < len
			&& (str[st_ct + tf_ct]) == to_find[tf_ct] && to_find[tf_ct])
		{
			tf_ct++;
		}
		if (!to_find[tf_ct])
			return ((char *)&str[st_ct]);
		st_ct++;
	}
	return (NULL);
}
