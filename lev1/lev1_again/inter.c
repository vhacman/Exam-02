#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int i = 0;
	int seen[256] = {0};
	int present[256] = {0};

	while (s2[i])
		present[(unsigned char)s2[i++]] = 1;

	i = 0;
	while (s1[i])
	{
		if (present[(unsigned char)s1[i]] && !seen[(unsigned char)s1[i]])
		{
			write(1, &s1[i], 1);
			seen[(unsigned char)s1[i]] = 1;
		}
		i++;
	}
}

int main(int ac, char **av)
{
	if(ac == 3)
		inter(av[1], av[2]);
	write(1, "\n", 1);
	return 0;
}
