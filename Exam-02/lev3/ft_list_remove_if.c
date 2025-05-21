/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:25:54 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:25:54 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // necessario per free

/*
** Definizione della struttura del nodo di una lista concatenata.
** - `data`: puntatore al contenuto del nodo.
** - `next`: puntatore al nodo successivo.
*/
typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

/*
** Rimuove dalla lista tutti i nodi il cui campo `data` è uguale a `data_ref`,
** secondo il criterio di confronto definito da `cmp`.
**
** Parametri:
** - `begin_list`: doppio puntatore al primo nodo della lista.
** - `data_ref`: valore di riferimento da confrontare.
** - `cmp`: funzione di confronto (deve restituire 0 se i dati coincidono).
**
** Procedura:
** 1. Rimuove tutti i nodi iniziali che soddisfano la condizione.
** 2. Poi scorre la lista con un puntatore `curr`.
**    - Se `curr->next` soddisfa la condizione, viene rimosso.
**    - Altrimenti si passa al nodo successivo.
**
** La memoria dei nodi rimossi viene liberata con `free`.
*/
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp;

    // Rimozione dei nodi all'inizio della lista
    while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
    {
        temp = *begin_list;
        *begin_list = (*begin_list)->next;
        free(temp);
    }

    // Rimozione dei nodi interni
    t_list *curr = *begin_list;
    while (curr && curr->next)
    {
        if (cmp(curr->next->data, data_ref) == 0)
        {
            temp = curr->next;
            curr->next = temp->next;
            free(temp);
        }
        else
            curr = curr->next;
    }
}
