#include <unistd.h>

size_t  ft_strspn(const char *s, const char *accept)
{
	const char *start = s;
	const char *check;

	while(*s)
	{
		check = accept;
		while(*check && *check != *s)
			check++;
		if(!*check)
			break;
		s++;
	}
	return(s - start);
}


// #include <stdio.h>
// int main(void)
// {
// 	printf("%zu\n", ft_strspn("abcde123", "abcde"));      // 5
// 	printf("%zu\n", ft_strspn("123abc", "0123456789"));   // 3
// 	printf("%zu\n", ft_strspn("hello", "he"));            // 2
// 	printf("%zu\n", ft_strspn("hello", "xyz"));           // 0
// 	printf("%zu\n", ft_strspn("", "abc"));                // 0
// 	printf("%zu\n", ft_strspn("abcdef", ""));             // 0
// 	return 0;
// }