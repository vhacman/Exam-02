#include <unistd.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t  i = 0;
    size_t  k;

    while(s[i])
    {
        k = 0;
        while(reject[k])
        {
            if(reject[k] == s[i])
                return(i);
            k++;
        }
        i++;
    }
    return(i);
}

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
//     if (argc == 3)
//     {
//         printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], ft_strcspn(argv[1], argv[2]));
//         printf("strcspn(\"%s\", \"%s\") = %zu\n", argv[1], argv[2], strcspn(argv[1], argv[2]));
//     }
//     return(0);
// }