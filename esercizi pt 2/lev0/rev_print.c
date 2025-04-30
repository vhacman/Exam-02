#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}
void    rev_print(char *str)
{
    int i = ft_strlen(str) - 1;

    while(str[i])
    {
        ft_putchar(str[i]);
        i--;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_print(av[1]);
    ft_putchar('\n');
    return(0);
}