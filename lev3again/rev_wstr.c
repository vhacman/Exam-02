#include <unistd.h>

int is_delimiter(char c)
{
    return(c == ' ' || c == '\n' || c == '\n');
}

int rskip_space(char *str, int i)
{
    while(str[i] && is_delimiter)
        i--;
    return i;
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

int rskip_word(char *str, int i)
{
    while(str[i] && !is_delimiter(str[i]))
        i--;
    return i; 
}

void    rev_wstr(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;

    while(i >= 0)
    {
        i = rskip_space(str, i);
        if(i < 0)
            break;
        start = rskip_word(str, i);
        write(1, &str[start + 1], 1);
        i = start;
        if(i > 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return 0;
}
