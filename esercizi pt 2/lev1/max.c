int max(int *tab, unsigned int len)
{
	unsigned int i = 0;
	int max = tab[0];
	
	if(len == 0)
		return(0);
	while(tab[i] && i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}

// #include <stdlib.h>
// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if (argc < 3)
// 		return(0);
// 	int *tab = malloc(sizeof(int) * (argc - 1));
	
// 	printf("max( {");
// 	for (unsigned int i = 2; i < argc; i++)
// 	{
// 		printf("%s", argv[i]);
// 		if (i != argc - 1)
// 			printf(";");
// 		tab[i - 2] = atoi(argv[i]);
// 	}
// 	printf("} , %s) = %d\n", argv[1], max(tab, atoi(argv[1])));
// 	// printf("max(\"%s\") = %d\n", argv[1], is_power_of_2(atoi(argv[1])));
// 	return(0);
// }