#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char	*c_dest;
    char	*c_src;
    size_t	i;

	if (!dest)
		return(NULL);	    
    c_dest = (char*)dest;
    c_src = (char*)src;
    if (dest > src)
    {
        while (n--)
            c_dest[n] = c_src[n];
    }
    else
    {
        i = 0;
        while (i < n)
        {
            c_dest[i] = c_src[i];
            i++;
        }
     } 
	 return (dest);
}
