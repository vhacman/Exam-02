
int is_delim(char c)
{
    return(c == ' ' || (c >= 9 && c <= 13));
}

int ft_atoi(const char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(is_delim(str[i]))
        i++;
    
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -sign;
        i++;
    }

    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return(res * sign);
}

// #include <unistd.h>
// #include <stdlib.h>
// #include <stdio.h>
// int main(int ac, char **av)
// {
//     int result = ft_atoi(av[1]);
//     int result1 = atoi(av[1]);

//     printf("%d\n", result);
//     printf("%d\n", result1);
// }