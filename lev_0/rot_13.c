#include <unistd.h>

void    rot_13(char *str)
{
    int i = 0;
    char c;

    while (str[i])
    {
        c = str[i];
        if ((c >= 'A' && c <= 'M') || (c >= 'a' && c<= 'm'))
            c = c + 13;
        else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
            c = c - 13;
        write (1, &c, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        rot_13(av[1]);
    write( 1, "\n", 1);
    return (0);
}
