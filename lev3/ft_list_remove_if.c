typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#include <stdlib.h>

// Funzione che rimuove dalla lista tutti i nodi che contengono dati uguali a data_ref
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *current = *begin_list;  // Puntatore al nodo corrente, inizialmente il primo nodo della lista
    t_list *prev = NULL;            // Puntatore al nodo precedente, inizialmente NULL (non c'è nodo precedente)

    // Itera attraverso la lista finché current non diventa NULL
    while (current != NULL)
    {
        // Se i dati del nodo corrente sono uguali ai dati di riferimento (comparando tramite cmp)
        if (cmp(current->data, data_ref) == 0)
        {
            // Se il nodo da rimuovere è il primo nodo della lista
            if (prev == NULL)
            {
                // Aggiorniamo il primo nodo della lista per farlo puntare al prossimo nodo
                *begin_list = current->next;
            }
            else
            {
                // Altrimenti, colleghiamo il nodo precedente al nodo successivo
                prev->next = current->next;
            }

            // Salviamo il puntatore al nodo corrente in una variabile temporanea
            t_list *temp = current;
            // Spostiamo current al prossimo nodo
            current = current->next;
            // Liberiamo la memoria del nodo corrente (che è stato rimosso)
            free(temp);
        }
        else
        {
            // Se i dati del nodo corrente non sono uguali a data_ref, aggiorniamo i puntatori
            prev = current;             // Il nodo corrente diventa il nodo precedente
            current = current->next;    // Spostiamo current al prossimo nodo
        }
    }
}

