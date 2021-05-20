#include "libft.h"

size_t  ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t size_src;
    size_t i;

    size_src = ft_strlen(src);
    i = 0;
    while (i < size_src && i + 1 < size)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = 0;
    return (size_src);
}