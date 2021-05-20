#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t size;
	char *str;

	str = (char*)s;
    size = ft_strlen(s);
	if (c == 0)
		return (&str[size]);
    while (size--)
    {
        if (s[size] == (char)c)
            return (&str[size]);
    }
    return (NULL);
}
