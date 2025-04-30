#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

char    *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *dest = malloc(sizeof(char) * (len + 1));
    if(!dest)
        return(NULL);
    while(src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}


// #include <stdio.h>
// #include <string.h>
// int main(int argc, char **argv)
// {
//     if(argc == 1)
//     {
//         printf("ft_strdup(\"\") = %s\n", ft_strdup(""));
//         printf("strdup(\"\") = %s\n", strdup(""));

//         return(0);
//     }
//     printf("ft_strdup(\"%s\") = %s\n", argv[1], ft_strdup(argv[1]));
//     printf("strdup(\"%s\") = %s\n", argv[1], strdup(argv[1]));

//     return(0);
// }