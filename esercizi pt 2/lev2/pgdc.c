#include <stdlib.h>
#include <stdio.h>

int pgdc(int a, int b)
{
    if(b != 0)
    {
        int temp = a;
        b = a % b;
        a = temp;
    }
    return (a);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int a = atoi(av[1]);
        int b = atoi (av[2]);
        if(a > 0 && b > 0)
            printf("%u", pgdc(a, b));
    }
    printf("\n");
    return(0);
}