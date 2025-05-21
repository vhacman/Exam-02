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
        char c = str[i];
        if(c >= 'a' && c <= 'y')
            ft_putchar(c + 1);
        else if(c >= 'A' && c <= 'Y')
            ft_putchar(c + 1);
        else if(c == 'z')
            ft_putchar('a');
        else if(c == 'Z')
            ft_putchar('A');
        else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rotone(av[1]);
    ft_putchar('\n');
    return(0);
}
