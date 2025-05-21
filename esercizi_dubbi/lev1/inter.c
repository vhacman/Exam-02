#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i = 0;
	char seen[256] = {0};

	while(s1[i])
	{
		int j = 0;
		while(s2[j])
		{
			if(s1[i] == s2[j] && !seen[(unsigned char) s1[i]])
			{
				write(1, &s1[i], 1);
				seen[(unsigned char)s1[i]] = 1;
			}
			j++;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
