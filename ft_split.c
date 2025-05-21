/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okochulo <okochulo@student.42vienna.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:49:34 by okochulo          #+#    #+#             */
/*   Updated: 2025/05/21 16:46:28 by okochulo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ct_wrd(const char *s, char delim)
{
	size_t	count;
	int		char_in_word;

	count = 0;
	char_in_word = 0;
	while (*s)
	{
		if (*s != delim && !char_in_word)
		{
			char_in_word = 1;
			count++;
		}
		else if (*s == delim)
			char_in_word = 0;
		s++;
	}
	return (count);
}

char	*ft_strndup(const char *start, size_t len)
{
	char	*substr;
	size_t	i;

	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (substr == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = start[i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

size_t	ft_get_wrd_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_process_split(char const *s, char c, char **res)
{
	size_t		i;
	const char	*wrd_start;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			wrd_start = s;
			s += ft_get_wrd_len(s, c);
			res[i] = ft_strndup(wrd_start, s - wrd_start);
			if (res[i] == NULL)
			{
				while (i > 0)
					free(res[--i]);
				free(res);
				return (NULL);
			}
			i++;
		}
		else
			s++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	size_t		word;
	size_t		i;
	char		**res;
	const char	*wrd_start;

	word = ft_ct_wrd(s, c);
	res = (char **)malloc(sizeof(char *) * (word + 1));
	if (res == NULL)
		return (NULL);
	return (ft_process_split(s, c, res));
}
