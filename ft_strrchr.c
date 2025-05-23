/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 11:53:38 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:46:20 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	ct;

	ct = 0;
	while (str[ct])
	{
		if (str[ct] == (char)c)
			return ((char *)&str[ct]);
		ct++;
	}
	if ((char)c == '\0')
		return ((char *)&str[ct]);
	return (0);
}
/*
#include <string.h>

int main()
{
    const char *test_strings[] = {
        "Hello, World!",
        "",
        "OpenAI",
        "Sample string with spaces",
        "1234567890",
    };

    char test_chars[] = {
        'o',
        'x',
        'A',
        ' ',
        '\0',
    };

    size_t num_tests = sizeof(test_strings) / sizeof(test_strings[0]);
    size_t i = 0;

    while (i < num_tests) {
        // Using custom ft_strchr
        char *custom_result = ft_strchr(test_strings[i], test_chars[i]);

        // Using standard strchr
        char *standard_result = strchr(test_strings[i], test_chars[i]);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("String: \"%s\"\n", test_strings[i]);
        printf("Character: '%c'\n", test_chars[i]);
        printf("Custom ft_strchr: \"%s\"\n",
             custom_result ? custom_result : "NULL");
        printf("Standard strchr: \"%s\"\n",
             standard_result ? standard_result : "NULL");

        // Validation
        if (custom_result == standard_result) {
            printf("The results match!\n\n");
        } else {
            printf("The results do not match.\n\n");
        }

        i++;
    }

    return 0;
}
*/
/*
The ft_strchr function searches for the first occurrence of a character
 in a string. It returns a pointer to the first occurrence of the character
 in the string, or NULL if the character is not found.
 The function also checks for the null terminator and returns a pointer to it
 if the character is '\0'.
*/