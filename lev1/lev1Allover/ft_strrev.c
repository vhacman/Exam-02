
int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

char	*ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char temp;

	while(i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return str;
}

#include <stdio.h>
int	main()
{
	char str[] = "la mamma";

	printf("%s\n", ft_strrev(str));
	return 0;
}

