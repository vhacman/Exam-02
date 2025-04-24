#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

// int main(int argc, char **argv)
// {
//     char *str = malloc(sizeof(char) * 100);
//     printf("ft_strcpy(\"%s\", str) = %s\n", argv[1], ft_strcpy(str, argv[1]));
//     free(str);
//     return(0);
// }