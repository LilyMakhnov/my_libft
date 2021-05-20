#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    unsigned char *tab;

	if (!s)
		return (NULL);
    tab = (unsigned char*)s;
    while (n--)
	    *tab++ = (unsigned char)c;
	return (s);
}
