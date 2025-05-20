
// char    *ft_strpbrk(const char *s1, const char *s2)
// {
// 	while(*s1)
// 	{
// 		const char *temp = *s2;
// 		while(*temp)
// 		{
// 			if(*s1 == *temp)
// 				return(char *)s1;
// 			temp++;
// 		}
// 		s1++;
// 	}
// 	return(0);
// }

char    *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;
    while(s1[i])
    {
        j = 0;
        while(s2[j])
        {
            if(s1[i] == s2[j])
                return((char *)(s1 + i));
            j++;
        }
        i++;
    }
    return(0);
}
#include <stdio.h>
int main()
{
    char test[] = "Ciaone";
    char test2[] = "wxyzo";
    printf("%s\n", ft_strpbrk(test, test2));
    return 0;
}