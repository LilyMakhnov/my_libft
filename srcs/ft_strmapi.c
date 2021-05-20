#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char *dest;
	char *ret;
 	unsigned int i;

 	dest =(char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
 	if (!dest)
		return (NULL);
	ret = dest;
	i = 0;
	while (*s)
		*dest++ = (*f)(i++, *s++);
	*dest = 0;
	return (ret);
}