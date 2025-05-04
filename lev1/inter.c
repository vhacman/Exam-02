#include <unistd.h>

int is_seen(char *str, char c, int pos)
{
	int i = 0;
	while(i < pos)
	{
		if(str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

void    inter(char *s1, char *s2)
{
	int i = 0;
	int k;

	while(s1[i])
	{
		k = 0;
		while(s2[k])
		{
			if(s1[i] == s2[k] && !is_seen(s1, s1[i], i))
			{
				write(1, &s1[i], 1);
				break;
			}
			k++;
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