#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ulstr(char *str)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if(c >= 'a' && c <= 'z')
            ft_putchar(c = c - 32);
        else if(c >= 'A' && c <= 'Z')
            ft_putchar(c = c + 32);
        else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        ulstr(av[1]);
    ft_putchar('\n');
    return(0);
}