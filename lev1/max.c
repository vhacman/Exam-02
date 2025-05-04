
int max(int *tab, unsigned int len)
{
	if(len == 0)
		return(0);
	
	int max = tab[0];
	unsigned int i = 0;
	while(i < len)
	{
		if(tab[i] > max)
			max = tab[i];
		i++;
	}
	return(max);
}


// #include <stdio.h>
// int main(void)
// {
//     int a[] = {4, 7, 2, 9, 5};
//     int b[] = {-10, -3, -50, -1};
//     int c[] = {42};
//     int d[] = {};
    
//     printf("Max a: %d\n", max(a, 5));     // 9
//     printf("Max b: %d\n", max(b, 4));     // -1
//     printf("Max c: %d\n", max(c, 1));     // 42
//     printf("Max d: %d\n", max(d, 0));     // 0

//     return 0;
// }
