#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    snake_to_camel(char *str)
{
    int i = 0;
    int upper;

    while(str[i])
    {
        char c = str[i];
        if(c == '_')
            upper = 1;
        else
        {
            if(upper && c >= 'a' && c <= 'z')
                ft_putchar(c - 32);
            else
                ft_putchar(c);
            upper = 0;
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        snake_to_camel(av[1]);
    ft_putchar('\n');
    return 0;
}