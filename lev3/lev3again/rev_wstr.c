#include <unistd.h>

/* Returns the length of the string */
int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return i;
}

/* Moves backward until the previous space or start of string */
int rskip_word(char *str, int i)
{
    while (i >= 0 && str[i] != ' ')
        i--;
    return i;
}

/* Prints the words of the string in reverse order */
void rev_wstr(char *str)
{
    int i = ft_strlen(str) - 1;
    int start;

    while (i >= 0)
    {
        start = rskip_word(str, i);
        write(1, &str[start + 1], i - start);
        i = start - 1;
        if (i >= 0)
            write(1, " ", 1);
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rev_wstr(av[1]);
    write(1, "\n", 1);
    return 0;
}
