/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 17:32:35 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 17:59:30 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int	ft_str_len(char *str)
{
	unsigned int	ct;

	ct = 0;
	while (str[ct])
	{
		ct++;
	}
	return (ct);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

    i = 0;
	if (size > 0)
	{
        while (src[i] && i < size - 1)
        {
		    dest[i] = src[i];
		    i++;
	    }
	    dest[i] = '\0';
    }
	return (ft_str_len(src));
}