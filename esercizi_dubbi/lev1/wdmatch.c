#include <unistd.h>

int	main(int ac, char **av)
{
	int i = 0;
	if(ac == 3)
	{
		int j = 0;
		char *s1 = av[1];
		char *s2 = av[2];

		while(s2[j])
		{
			if(s1[i] == s2[j])
				i++;
			j++;
		}

		if(s1[i] == '\0')
		{
			i = 0;
			while(s1[i])
			{
				write(1, &s1[i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return 0;
}
