#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0' );
        i++;
    }
    return(res);
}

void    print_tab_mult(int n)
{
    int i = 1;

    while(i < 10)
    {
        ft_putnbr(i);
        ft_putchar('x');
        ft_putnbr(n);
        ft_putchar('=');
        ft_putnbr(i * n);
        ft_putchar('\n');
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        print_tab_mult(ft_atoi(av[1]));
    else
        ft_putchar('\n');
    return(0);
}