#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*c_s;

	if (!s)
		return (NULL);
	c_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (c_s[i] == (unsigned char)c)
			return (&c_s[i]);
		i++;
	}
	return (NULL);
}
