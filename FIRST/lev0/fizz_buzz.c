#include <unistd.h>

void    ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

void    fizz_buzz(void)
{
    int n = 1;

    while(n <= 100)
    {
        if((n % 3 == 0) && (n % 5 == 0))
            write(1, "fizzbuzz", 8);
        else if(n % 3 == 0)
            write(1, "fizz", 4);
        else if(n % 5 == 0)
            write(1, "buzz", 4);
        else
            ft_putnbr(n);
        write(1, "\n", 1);
        n++;
    }
}

int main(void)
{
    fizz_buzz();
    return(0);
}