#include <unistd.h>

int is_delim(char c)
{
    return(c == ' ' || c == '\t' || c == '\n');
}

void    first_word(char *str)
{
    int i = 0;

    while(str[i] && is_delim(str[i]))
        i++;
    while(str[i] && !is_delim(str[i]))
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if(ac == 2)
        first_word(av[1]);
    write(1, "\n", 1);
    return 0;
}
