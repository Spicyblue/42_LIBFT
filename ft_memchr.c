/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:06:54 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 14:26:06 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    *ft_memchr(const void *ptr, int val, size_t num)
{
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char v = (unsigned char)val;
    size_t  i;

    i = 0;
    while (i < num)
    {
        if (p[i] == v)
        {
            return (void *)(p + i);
        }
        i++;
    }
    return (NULL);
}
