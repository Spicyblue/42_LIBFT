/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 12:00:37 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:49:11 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_cpystr(char *dst, const char *src)
{
	while (*src)
	{
		*dst = *src;
		src++;
		dst++;
	}
	*dst = '\0';
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char			*cpy;
	size_t			len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	cpy = malloc(sizeof(char) * (len + 1));
	if (cpy == NULL)
		return (NULL);
	ft_cpystr(cpy, str);
	return (cpy);
}
/*
#include <string.h>

int main()
{
    const char *test_cases[] = {
        "Hello, World!",
        "",
        "42Vienna",
        "Sample string with spaces",
        "1234567890"
    };

    size_t num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    size_t i = 0;

    while (i < num_tests) {
        // Using custom ft_strdup
        char *cus_dup = ft_strdup(test_cases[i]);

        // Using standard strdup
        char *std_dup = strdup(test_cases[i]);

        // Printing results
        printf("Test case %zu:\n", i + 1);
        printf("Original string: \"%s\"\n", test_cases[i]);
        printf("Custom ft_strdup: \"%s\"\n", cus_dup ? cus_dup : "NULL");
        printf("Standard strdup: \"%s\"\n", std_dup ? std_dup : "NULL");

        // Validation
        if ((cus_dup && std_dup && strcmp(cus_dup, std_dup) == 0) ||
            (cus_dup == NULL && std_dup == NULL)) {
            printf("The duplicated strings match!\n\n");
        } else {
            printf("The duplicated strings do not match.\n\n");
        }

        // Free allocated memory
        free(cus_dup);
        free(std_dup);

        i++;
    }

    return (0);
}
*/
/*
The ft_strdup function duplicates a string by allocating memory for it
and copying the contents of the original string into the new memory location.
It takes a single parameter, the string to be duplicated, and returns a pointer
to the duplicated string. If the allocation fails, it returns NULL.
The function also sets errno to ENOMEM if memory allocation fails.
*/