#include <unistd.h>

void print_str(char *s)
{
	int i = 0;
	while (s[i])
		write(1, &s[i++], 1);
}

int wdmtch(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] && s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	return (s1[i] == '\0');
}

int main(int ac, char **av)
{
	if (ac == 3 && wdmtch(av[1], av[2]))
		print_str(av[1]);
	write(1, "\n", 1);
	return 0;
}
