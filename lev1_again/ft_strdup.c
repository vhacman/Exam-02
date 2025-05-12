#include <stdlib.h>
#include <unistd.h>


int ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}


char    *ft_strdup(char *src)
{
	int i = 0;
	int len = ft_strlen(src);
	char *dest = malloc(sizeof(char) * (len + 1));

	if(!dest)
		return NULL;
	while(src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}