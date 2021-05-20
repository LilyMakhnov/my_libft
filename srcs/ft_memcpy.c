#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
	char    *c_dest;
	char    *c_src;

	if (!dest)
		return (NULL);
	c_dest = (char*)dest;
	c_src = (char*)src;
	while (n--)
		*c_dest++ = *c_src++;
	return (dest);
}
