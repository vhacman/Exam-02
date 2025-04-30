#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int is_printed(char *str1, char c, int pos)
{
	int i = 0;

	while(str1[i] && i < pos)
	{
		if(str1[i] == c)
			return(1);
		i++;
	}
	return(0);
}

void    inter(char *str1, char *str2)
{
	int i = 0;
	int k;

	while(str1[i])
	{   k = 0;
		while(str2[k])
		{
			if(str1[i] == str2[k] && !is_printed(str1, str1[i], i))
			{
				ft_putchar(str1[i]);
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
	ft_putchar('\n');
	return(0);
}