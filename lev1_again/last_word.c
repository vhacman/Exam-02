#include <unistd.h>

int is_delim(char c)
{
    return(c == ' ' || c == '\n' || c == '\t');
}
int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return i;
}

void    last_word(char *str)
{
    int i = ft_strlen(str) - 1;

    while(i >= 0 && is_delim(str[i]))
        i--;
    while(i >= 0 && !is_delim(str[i]))
        i--;
    int start = i + 1;
    while(str[start] && !is_delim(str[start]))
    {
        write(1, &str[start], 1);
        start++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        last_word(av[1]);
    write(1, "\n", 1);
    return 0;
}
