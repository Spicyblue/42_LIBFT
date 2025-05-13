/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:56:27 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 17:03:40 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *src = (unsigned char *)s;
    size_t i;

    i = 0;
    while (i < n)
    {
        src[i] = 0;
        i++;
    }
}