/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 16:23:47 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/13 16:30:40 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *str = (unsigned char *)s;
    unsigned char cst = (unsigned char)c;
    size_t i;

    i = 0;
    while (i < n)
    {
        str[i] = cst;
        i++;
    }
    return (s);
}