#include "libft.h"
#include <stdio.h>

char	*ft_strnstr2(const char *big, const char *little, size_t len)
{
	char *ret;
	size_t s_little;

	s_little = ft_strlen(little);
	printf("%lu\n", len);
	if (s_little < len)
		len -= (s_little - 1);
	printf("%lu\n", len);
	ret = (char*)big;
	if(!*little)
		return (ret);
	while (*ret && len--)
	{
		if (!ft_strncmp(ret, little, s_little))
			return ret;
		ret++;
	}
	return (0);
}

int main(void)
{
	printf("%s", ft_strnstr2("erzer", "eef", 0));
	return (0);
}
