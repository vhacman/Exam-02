#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j;

	while(s[i])
	{	
		j = 0;
		while(reject[j])
		{
			if(s[i] == reject[j])
				return i;
			j++;
		}
		i++;
	}
	return i;
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char *str = "la mamma";
	char *str1 = "l";

	printf("ft_strcspn: %ld\n", ft_strcspn(str, str1));
	printf("strcspn: %ld\n", strcspn(str, str1));
	return 0;
}
*/
