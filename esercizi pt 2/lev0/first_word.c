#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_delimiter(char c)
{
    return(c == ' ' || c == '\n' || c == '\t');
}

void    first_word(char *str)
{
    int i = 0;
    while(is_delimiter(str[i]))
        i++;
    while(str[i] && !is_delimiter(str[i]))
    {
        ft_putchar(str[i]);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        first_word(av[1]);
    ft_putchar('\n');
    return(0);
}