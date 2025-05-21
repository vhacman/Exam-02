#include <unistd.h>
size_t ft_strspn(const char *s, const char *accept)
{
	int i = 0;
	int j;

	while(s[i])
	{
		j = 0;
		while(accept[j] && s[i] != accept[j])
			j++;
		if(!accept[j])
			break;
		i++;
	}
	return i;
}


// size_t  ft_strspn(const char *s, const char *accept)
// {
// 	int i = 0;
// 	int j;
// 	int found;
// 	while(s[i])
// 	{
// 		j = 0;
// 		found = 0;
// 		while(accept[j])
// 		{
// 			if(s[i] == accept[j])
// 				found = 1;
// 			j++;
// 		}
// 		if(!found)
// 			break;
// 		i++;
// 	}
// 	return i;
// }

#include <string.h>
#include <stdio.h>
int main(void)
{
	printf("%zu\n", ft_strspn("abcde123", "abcde"));      // 5
	printf("%zu\n", ft_strspn("123abc", "0123456789"));   // 3
	printf("%zu\n", ft_strspn("hello", "he"));            // 2
	printf("%zu\n", ft_strspn("hello", "xyz"));           // 0
	printf("%zu\n", ft_strspn("", "abc"));                // 0
	printf("%zu\n", ft_strspn("abcdef", ""));             // 0
	return 0;
}