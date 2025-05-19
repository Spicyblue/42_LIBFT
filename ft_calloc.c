/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/17 16:34:44 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/17 16:41:42 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	size_t			i;
	void			*ptr;
	unsigned char	*temp_ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	temp_ptr = (unsigned char *)ptr;
	i = 0;
	while (i < total_size)
	{
		temp_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
