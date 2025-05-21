#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j;

	while(s1[i])
	{
		j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j])
				return((char *)(s1 + i));
			j++;
		}
		i++;
	}
	return 0;
}
/*
int	main()
{
	char *s1 = "la mamma";
	char *s2 = "j";

	printf("strpbrk: %s\n", strpbrk(s1, s2));
	printf("ft_strpbrk: %s\n", ft_strpbrk(s1, s2));
	return 0;
}
*/
