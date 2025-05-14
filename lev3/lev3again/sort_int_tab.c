
void    sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    int temp;

    //Quindi per evitare di andare "oltre la fine" dell’array (errore di memoria), ti fermi a i < size - 1.
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