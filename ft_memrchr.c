/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 14:26:29 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 14:40:30 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    *ft_memrchr(const void *ptr, int val, size_t num)
{
    const unsigned char *p = (const unsigned char *)ptr;
    unsigned char v = (unsigned char)val;
    size_t  i;
    const unsigned char  *last;

    last = NULL;
    i = 0;
    while (i < num)
    {
        if (p[i] == v)
            last = p + i;
        i++;
    }
    if (last == NULL)
        return (NULL);
    return (void *)last;
}