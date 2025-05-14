#include <stdlib.h>
int get_len(int n)
{
    int len = 0;

    if(n <= 0)
        len++;
    while(n != 0)
    {
        len++;
        n = n / 10;
    }
    return len;
}

char	*ft_itoa(int nbr)
{
    int len = get_len(nbr);

    char *result = malloc(len + 1);

    if(!result)
        return NULL;
    result[len] = '\0';

    if(nbr == 0)
        result[0] = '0';

    if(nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr != 0)
    {
        result[--len] = nbr % 10 + '0';
        nbr = nbr / 10;
    }
    return result;
}

// #include <stdio.h>
// int main()
// {
//     printf("%s\n", ft_itoa(-21474));
// }