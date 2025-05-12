/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 16:02:54 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/12 16:02:59 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int ft_isprint(int c )
{
    if (c == EOF)
        return (0);
    if (32 <= c && c <= 126)
        return (1);
    return (0);
}