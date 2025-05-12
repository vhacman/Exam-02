#include <unistd.h>

void    sort_int_tab(int    *tab, unsigned int size)
{
    int i = 0;
    int temp;

    while(i < size - 1)
    {
        if(tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
}

// #include <stdio.h>
// int main(void)
// {
// 	int array[] = {5, 3, 8, 1, 2};
// 	unsigned int size = 5;

// 	printf("Before: ");
// 	for (unsigned int i = 0; i < size; i++)
// 		printf("%d\n", array[i]);
// 	sort_int_tab(array, size);
// 	printf("After:  ");
// 	for (unsigned int i = 0; i < size; i++)
// 		printf("%d\n", array[i]);
// 	return 0;
// }
