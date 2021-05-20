#include "libft.h"

size_t    ft_strlcat(char *dest, const char *src, size_t size)
{
        size_t i;
        size_t len_dest;
        size_t len_src;

        len_dest = ft_strlen(dest);
        len_src = ft_strlen(src);
        i = 0;
        while (src[i] && i + len_dest + 1 < size)
        {
                dest[len_dest + i] = src[i];
                i++;
        }
        dest[len_dest + i] = '\0';
        if (size < len_dest)
                return (len_src + size);
        else
                return (len_dest + len_src);
}