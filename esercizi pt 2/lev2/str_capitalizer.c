#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int is_letter(char c)
{
    return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

char to_upper(char c)
{
    if(c >= 'a' && c <= 'z')
        c = c - 32;
    return(c);
}

char to_lower(char c)
{
    if(c >= 'A' && c <= 'Z')
        c = c + 32;
    return(c);
}

void    str_capitalizer(char *str)
{
    int i = 0;
    char current;
    char previous = ' ';

    while(str[i])
    {
        current = str[i];
        if(!is_letter(previous) && is_letter(current))
            current = to_upper(current);
        else if(is_letter(current))
            current = to_lower(current);
        ft_putchar(current);
        previous = str[i];
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;

    if(ac == 1)
        ft_putchar('\n');
    if(ac > 1)
    {
        {
            str_capitalizer(av[i]);
            ft_putchar('\n');
            i++;
        }
    }
    else
        ft_putchar('\n');
    return(0);
}
