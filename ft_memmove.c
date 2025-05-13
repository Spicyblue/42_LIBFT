/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:39:26 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 16:55:15 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *dest1 = (unsigned char *)dest;
    const unsigned char *src1 = (const unsigned char *)src;
    size_t i;

    if (src1 < dest1 && dest1 < src1 + n)
    {
        i = n;
        while (i > 0)
        {
            dest1[i - 1] = src1[i - 1];
            i--;
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dest1[i] = src1[i];
            i++;
        }
    }
    return (dest);
}