#include <unistd.h>
#include <stdio.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int skip_space(char *str, int i)
{
    while(str[i] == ' ' || str[i] == '\n' || str[i] == '\n')
        i++;
    return(i);
}

int ft_wordlen(char *str)
{
    int i = 0;

    while(str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        i++;
    return(i);
}

void    epur_str(char *str)
{
    int i = 0;
    int first = 1;
    int word_len;

    i = skip_space(str, i);
    while(str[i])
    {
        if(first == 0)
            ft_putchar(' ');
        word_len = ft_wordlen(str + i);
        write(1, str + i, word_len);
        i = word_len + i;
        first = 0;
        i = skip_space(str, i);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        epur_str(av[1]);
    ft_putchar('\n');
    return(0);
}