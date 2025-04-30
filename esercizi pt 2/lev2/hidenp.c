#include <unistd.h>

int is_hidden(char *s1, char *s2)
{
    int i = 0;
    int j = 0;

    while(s1[i] && s2[j])
    {
        if (s1[i] == s2[j])
            i++;
        j++;
    }
    return(s1[i] == '\0');
}

int main(int ac, char **av)
{
    char *s1 = av[1];
    char *s2 = av[2];

    if (ac == 3)
    {
        if(is_hidden(s1, s2))
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
    return(0);
}