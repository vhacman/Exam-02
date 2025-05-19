void	sort_int_tab(int *tab, unsigned int size)
{
	int temp;
	unsigned int i = 0;

	while(i < size - 1)
	{
		if(tab[i] < tab[i + 1])
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

#include <stdio.h>
int main(void)
{
    int tab[] = {4, 2, 7, 3, 1};
    unsigned int size = 5;

    for (unsigned int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    sort_int_tab(tab, size);

    for (unsigned int i = 0; i < size; i++)
        printf("%d ", tab[i]);
    printf("\n");

    return 0;
}

