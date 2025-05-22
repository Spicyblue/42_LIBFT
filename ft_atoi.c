/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 19:05:19 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/22 11:36:40 by okochulo         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "libft.h"

int	ft_is_space(char s)
{
	return ((s >= 9 && s <= 13) || s == 32);
}

int	ft_is_num(char s)
{
	return (s >= 48 && s <= 57);
}

int	ft_atoi(const char *str)
{
	int	neg;
	int	result;

	neg = 1;
	result = 0;
	while (ft_is_space(*str))
	{
		str++;
	}
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (ft_is_num(*str))
	{
		result *= 10;
		result += *str - 48;
		str++;
	}
	return (result * neg);
}
/*
int main()
{
    // Test cases
    const char *test1 = "42";
    const char *test2 = "   -42";
    const char *test3 = "4193 with words";
    const char *test4 = "words and 987";
    const char *test5 = "-91283472332";

    // Testing ft_atoi and comparing with atoi
    printf("Test 1: '%s' -> ft_atoi: %d, atoi: %d\n", test1, ft_atoi(test1), atoi(test1));
    printf("Test 2: '%s' -> ft_atoi: %d, atoi: %d\n", test2, ft_atoi(test2), atoi(test2));
    printf("Test 3: '%s' -> ft_atoi: %d, atoi: %d\n", test3, ft_atoi(test3), atoi(test3));
    printf("Test 4: '%s' -> ft_atoi: %d, atoi: %d\n", test4, ft_atoi(test4), atoi(test4));
    printf("Test 5: '%s' -> ft_atoi: %d, atoi: %d\n", test5, ft_atoi(test5), atoi(test5));

    return 0;
}
*/
// The ft_atoi function converts the initial portion of the string pointed to by str to int.
// The function skips any whitespace characters at the beginning of the string.
// It then checks for an optional '+' or '-' sign to determine the sign of the number.
// The function continues to read digits until a non-digit character is encountered.
// The resulting integer is returned, taking into account the sign.
// The function handles edge cases such as leading whitespace, signs, and non-numeric characters.
// The function does not handle overflow or underflow cases.