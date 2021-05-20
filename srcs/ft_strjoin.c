#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	char *ret;

	dest = (char*)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!dest)
		return (NULL);
	ret = dest;
	while (*s1)
		*dest++ = *s1++;
	while (*s2)
		*dest++ = *s2++;
	*dest = 0;
	return (ret);
}