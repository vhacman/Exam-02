
#include <unistd.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j;

    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if(s[i] == reject[j])
                return i;
            j++;
        }
        i++;
    }
    return i;
}


// #include <stdio.h>
// #include <string.h> // solo per confronto
// int main(void)
// {
//     char *str = "hello world!";
//     char *set1 = "w";
//     char *set2 = "xyz";
//     char *set3 = "lo";

//     printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", str, set1, ft_strcspn(str, set1));
//     printf("strcspn   (\"%s\", \"%s\") = %zu\n", str, set1, strcspn(str, set1));

//     printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", str, set2, ft_strcspn(str, set2));
//     printf("strcspn   (\"%s\", \"%s\") = %zu\n", str, set2, strcspn(str, set2));

//     printf("ft_strcspn(\"%s\", \"%s\") = %zu\n", str, set3, ft_strcspn(str, set3));
//     printf("strcspn   (\"%s\", \"%s\") = %zu\n", str, set3, strcspn(str, set3));

//     return 0;
// }
