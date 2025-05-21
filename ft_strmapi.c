#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

size_t	ft_get_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int  i;
    char	    *res;

    if (s == NULL || f == NULL)
        return (NULL);
    res = (char *)malloc(sizeof(char) * (ft_get_strlen(s) + 1));
    if (res == NULL)
        return (NULL);
    i = 0;
    while (s[i])
    {
        res[i] = f(i, s[i]);
        i++;
    }
    res[i] = '\0';
    return (res);
}