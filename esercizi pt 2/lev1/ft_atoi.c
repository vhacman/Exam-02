
int ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;

    while(str[i] >= 0 && str[i] <= 32)
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = -sign;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return(result * sign);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int ac, char **av)
// {
//     (void)ac;
//     printf("ft_atoi(\"%s\") = %d\n", av[1], ft_atoi(av[1]));
//     printf("atoi(\"%s\") = %d\n", av[1], atoi(av[1]));

//     return(0);
// }