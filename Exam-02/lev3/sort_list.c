/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:28:22 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:28:22 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Definizione della struttura di un nodo di lista singolarmente concatenata.
** Ogni nodo contiene:
** - un intero `data`
** - un puntatore al nodo successivo `next`
*/
typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;

/*
** Ordina una lista concatenata `lst` in base alla funzione di confronto `cmp`.
**
** Parametri:
** - lst: puntatore al primo nodo della lista
** - cmp: funzione che confronta due interi.
**        Deve restituire 1 se ordinati, 0 se da scambiare.
**
** Algoritmo:
** - Bubble sort in-place:
**   Scorre la lista, confronta ogni coppia di nodi adiacenti.
**   Se fuori ordine (cmp restituisce 0), scambia i valori `data`.
**   Dopo uno scambio, riparte dall'inizio.
**
** - Scambia solo i dati, non i puntatori ai nodi.
** - Restituisce il puntatore alla testa della lista ordinata.
**
** Esempio:
** Per ordinamento crescente, `cmp(a, b)` → `return (a <= b);`
*/
t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *start = lst;
	int temp;

	while (lst != NULL && lst->next != NULL)
	{
		if ((*cmp)(lst->data, lst->next->data) == 0)
		{
			temp = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp;
			lst = start;  // riparte dall'inizio dopo ogni scambio
		}
		else
			lst = lst->next;
	}
	return start;
}
