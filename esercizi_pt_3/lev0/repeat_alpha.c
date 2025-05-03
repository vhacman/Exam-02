#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    repeat_alpha(char *str)
{
    int i = 0;
    int k = 1;

    while(str[i])
    {
        k = 1;
        if(str[i] >= 'a' && str[i] <= 'z')
            k = str[i] - 'a' + 1;
        if(str[i] >= 'A' && str[i] <= 'Z')
            k = str[i] - 'A' + 1;
        while(k--)
            write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        repeat_alpha(av[1]);
    ft_putchar('\n');
    return(0);
}