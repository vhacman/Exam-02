#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    alpha_mirror(char *str)
{
    int i = 0;
    char c;

    while(str[i])
    {
        c = str[i];
        if(c >= 'a' && c <= 'z')
            ft_putchar(c = 'a' + ('z' - c));
        else if(c >= 'A' && c <= 'Z')
            ft_putchar(c = 'A' + ('Z' - c));
        else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        alpha_mirror(av[1]);
    ft_putchar('\n');
    return(0);
}
