#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    rot_13(char *str)
{
    int i = 0;

    while(str[i])
    {
        char c = str[i];
        if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
            ft_putchar(c = c + 13);
        else if((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
            ft_putchar(c = c - 13);
        else
            ft_putchar(c);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    ft_putchar('\n');
    return(0);
}
