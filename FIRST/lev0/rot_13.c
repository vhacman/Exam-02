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
        if((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
            ft_putchar(str[i] + 13);
        else if((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
            ft_putchar(str[i] - 13);
        else
            ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        rot_13(av[1]);
    ft_putchar('\n');
    return(0);
}