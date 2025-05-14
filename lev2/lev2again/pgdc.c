#include <stdlib.h>
#include <stdio.h>

unsigned int pgdc(unsigned int a, unsigned int b)
{
    int temp;
    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return (a);
}

int main(int ac, char **av)
{
    if(ac == 3)
    {
        int n1 = atoi(av[1]);
        int n2 = atoi(av[2]);
        if( n1 > 0 && n2 > 0)
            printf("%d", pgdc(n1, n2));
    }
    printf("\n");
    return(0);
}