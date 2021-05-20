#include <stdio.h>
#include <ctype.h>
#include "libft.h"

int    main(void)
{
    printf("%d\n", ft_isalpha('0'));
    printf("%d\n", ft_isalpha('b'));
    printf("%d\n", ft_isdigit('a'));
    printf("%d\n", ft_isdigit('9'));
    printf("%d\n", ft_isalnum('\n'));
    printf("%d\n", ft_isalnum('8'));
    printf("%d\n", ft_isascii(231));
    printf("%d\n", ft_isascii(' '));
    printf("%d\n", ft_isprint('\n'));
    printf("%d\n", ft_isprint(' '));
    return (0);
}