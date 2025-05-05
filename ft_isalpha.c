/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:37:16 by okochulo          #+#    #+#             */
/*   Updated: 2025/04/29 17:27:25 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include "libft.h"

int ft_isalpha(int c )
{
    if (c == EOF)
        return (0);
    unsigned char usc = (unsigned char) c; // Check if casting is really required for the comparsion.
    if ('a' <= usc && usc <= 'z')
        return (1);
    if ('A' <= usc && usc <= 'Z')
        return (1);
    return (0);
}