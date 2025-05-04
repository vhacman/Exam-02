#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        ft_putchar(str[i++]);
}

// int main(void)
// {
//     char *str = "la mamma\n";
//     ft_putstr(str);
//     return(0);
// }