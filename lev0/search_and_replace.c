#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    search_and_replace(char *str, char c1, char c2)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if(c == c1)
            ft_putchar(c = c2);
        else
            ft_putchar(c);
        i++;
    }
}
int main(int ac, char **av)
{
    if(ac == 4 && av[2][1] == '\0' && av[3][1] == '\0')
        search_and_replace(av[1], av[2][0], av[3][0]);
    ft_putchar('\n');
    return(0);
}
