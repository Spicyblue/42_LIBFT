/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:49:09 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:36:01 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_ct_dig(int n)
{
	int	ct;

	ct = 0;
	if (n <= 0)
		count = 1;
	while (n != 0)
	{
		n = n / 10;
		ct++;
	}
	return (ct);
}

char	*ft_min_int(void)
{
	char	*res;

	res = (char *)malloc(sizeof(char) * 12);
	if (res != NULL)
		res = "-2147483648";
	return (res);
}

char	*ft_convert_int_to_str(char *res, int n, int len)
{
	while (len > 0)
	{
		res[len - 1] = (n % 10) + '0';
		n = n / 10;
		len--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	int		is_neg;
	char	*res;

	if (n == -2147483648)
		return (ft_min_int());
	is_neg = 0;
	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}
	len = ft_ct_dig(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	while (len > 0)
		ft_convert_int_to_str(res, n, len);
	if (is_neg)
		res[0] = '-';
	return (res);
}
