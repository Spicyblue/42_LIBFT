/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:12:35 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/19 12:24:38 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (char)c)
		{
			last = s;
		}
		s++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <string.h>

int main() {
    const char *string = "Hello, World!";
    int chars_to_find[] = {'o', 'l', '!', 'x'};
    int num_tests = sizeof(chars_to_find) / sizeof(chars_to_find[0]);
    int i = 0;

    while (i < num_tests) {
        char *custom_result = ft_strrchr(string, chars_to_find[i]);
        char *standard_result = strrchr(string, chars_to_find[i]);

        printf("Searching '%c' in '%s'\n", chars_to_find[i], string);
        printf("ft_strrchr: %s\n", 
                custom_result ? custom_result : "Not found");
        printf("strrchr: %s\n", 
                standard_result ? standard_result : "Not found");
        i++;
    }

    return (0);
}
*/
/*
The ft_strrchr function searches for the last occurrence of a character
 in a string. It takes two parameters:
 1. the string to be searched.
 2. the character to search for.
 The function returns a pointer to the last occurrence of the character
 in the string, or NULL if the character is not found.
 If the character is '\0', it returns a pointer to the null terminator
 at the end of the string.
*/