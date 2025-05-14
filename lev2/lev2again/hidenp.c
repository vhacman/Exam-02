#include <unistd.h>

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int i = 0;
        int j = 0;
        char *s1 = av[1];
        char *s2 = av[2];

        while(s1[i] && s2[j])
        {
            if(s1[i] == s2[j])
                i++;
            j++;
        }
        if(s1[i] == '\0')
            write(1, "1\n", 2);
        else
            write(1, "0\n", 2);
    }
    else
        write(1, "\n", 1);
    return (0);
}