#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while(str[i])
		i++;
	return i;
}

// int	main(int ac, char **av)
// {
// 	if(ac == 2)
// 		printf("%d\n", ft_strlen(av[1]));
// 	return 0;
// }