#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rotone(char *str)
{
    int i = 0;

    while(str[i])
    {
        if(str[i] && (str[i] >= 'a' && str[i] <= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
            ft_putchar(str[i] = str[i] + 1);
        else if(str[i] == 'z')
            ft_putchar('a');
        else if(str[i] == 'Z')
            ft_putchar('A');
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        rotone(av[1]);
    write(1, "\n", 1);
    return 0;
}