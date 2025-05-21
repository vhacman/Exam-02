void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
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
// int main()
// {
//     int tab[] = {3, 2, 5, 5, 8, 1};
//     int size = 6;
//     sort_int_tab(tab, size);
//     printf("Array dopo l'ordinamento:\n");
//     for (unsigned int i = 0; i < size; i++)
//         printf("%d ", tab[i]);
//     printf("\n");
// }