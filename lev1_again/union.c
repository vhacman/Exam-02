#include <unistd.h>

void    print(char *str, char *seen)
{
    int i = 0;

    while(str[i])
    {
        if(!seen[(unsigned char)str[i]])
        {
            seen[(unsigned char)str[i]] = 1;
            write(1, &str[i], 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    char seen[256] = {0};

    if(ac == 3)
    {
        print(av[1], seen);
        print(av[2], seen);
    }
    write(1, "\n", 1);
}
