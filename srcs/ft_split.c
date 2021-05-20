#include "libft.h"

static void    ft_copy(char *dest, int *i, const char *str, char c)
{
        int j;

        j = 0;
        while (str[*i] == c && str[*i])
                (*i)++;
        while (str[*i] != c && str[*i])
        {
                dest[j] = str[*i];
                (*i)++;
                j++;
        }
        dest[j] = 0;
}

static int	sizeword(int *i, const char *str, char c)
{
        int j;

        j = 0;
        while (str[*i] == c && str[*i])
                (*i)++;
        while (str[*i] != c && str[*i])
        {
                (*i)++;
                j++;
        }
        return j;
}

static int	count_word(const char *str, char c)
{
        int i;
        int isword;
        int countword;

        i = -1;
        isword = 0;
        countword = 0;
        while (str[++i])
        {
                if (str[i] != c && isword == 0)
                {
                        isword = 1;
                        countword++;
                }
                if (str[i] == c)
                        isword = 0;
        }
        return countword;
}

char    **ft_split(char const *str, char c)
{
        int size;
        char **dest;
        int i;
        int pos;

        size = count_word(str, c);
		dest = malloc(sizeof(char*) * (size + 1));
        if (!dest)
                return NULL;
        i = 0;
        pos = 0;
        while (i < size)
        {
                dest[i] = malloc(sizeof(char) * (sizeword(&pos, str, c) + 1));
                if (!dest[i])
                        return NULL;
                i++;
        }
        i = 0;
        pos = 0;
        while (i < size)
                ft_copy(dest[i++], &pos, str, c);
        dest[size] = 0;
        return dest;
}