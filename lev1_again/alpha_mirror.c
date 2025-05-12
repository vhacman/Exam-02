#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    alpha_mirror(char *str)
{
    int i = 0;
    while(str[i])
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = 'z' - (str[i] - 'a');
        else if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = 'Z' - (str[i] - 'A');
        write(1, &str[i++], 1);
    }
}

int main (int ac, char **av)
{
    if(ac == 2)
        alpha_mirror(av[1]);
    ft_putchar('\n');
    return 0;
}