#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char *c_dest;
	unsigned char *c_src;
	size_t i;
	
	c_dest = (unsigned char *)dest;
	c_src = (unsigned char *)src;
	i = -1;
	while (++i < n)
	{
		c_dest[i] = c_src[i];
		if (c_src[i] == c)
			return (dest + i + 1);
	}
	return (NULL);
}
	
int main() {

    	const char * text = "Ceci est ma première phrase. Et ceci est ma seconde";
	size_t length = strlen( text );

	char firstSentence[ length ];
	int * res = ft_memccpy( firstSentence, text, '.', length );
	printf("%d", *res); 
	if ( res != NULL ) 
	{
		printf( "Une phrase entière a été trouvée.\n" );
		printf( "\t%s\n", firstSentence );
	} 
	else 
	{
		printf( "Aucune phrase entière trouvée.\n" );
		printf( "\t%s\n", firstSentence );
	}	
	return EXIT_SUCCESS;
}
