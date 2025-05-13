/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:32:24 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 16:38:12 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dest1 = (unsigned char *)dest;
    const unsigned char *src1 = (const unsigned char *)src;
    size_t i;

    i = 0;
    while (i < n)
    {
        dest1[i] = src1[i];
        i++;
    }
    return (dest);
}