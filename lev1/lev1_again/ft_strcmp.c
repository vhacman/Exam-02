
int	ft_strcmp(char *s1, char *s2)
{
	int i = 0;

	while(s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return(s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <unistd.h>
// #include <string.h>
// int main(void)
// {
//     char *test1 = "ciao";
//     char *test2 = "ciao";
//     char *test3 = "ciau";
//     char *test4 = "cia";

//     printf("ft_strcmp(\"%s\", \"%s\") = %d\n", test1, test2, ft_strcmp(test1, test2));
//     printf("strcmp(\"%s\", \"%s\") = %d\n", test1, test2, strcmp(test1, test2));

//     printf("ft_strcmp(\"%s\", \"%s\") = %d\n", test1, test3, ft_strcmp(test1, test3));
//     printf("strcmp(\"%s\", \"%s\") = %d\n", test1, test3, strcmp(test1, test3));

//     printf("ft_strcmp(\"%s\", \"%s\") = %d\n", test1, test4, ft_strcmp(test1, test4));
//     printf("strcmp(\"%s\", \"%s\") = %d\n", test1, test4, strcmp(test1, test4));

//     printf("ft_strcmp(\"%s\", \"%s\") = %d\n", test4, test1, ft_strcmp(test4, test1));
//     printf("strcmp(\"%s\", \"%s\") = %d\n", test4, test1, strcmp(test4, test1));
//     return 0;
// }