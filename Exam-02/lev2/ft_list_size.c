/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:17:32 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:17:32 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Definizione della struttura `t_list` -->DA METTERE IN ft_list.h
** - `data`: puntatore generico al contenuto del nodo.
** - `next`: puntatore al nodo successivo della lista.
*/
typedef struct    s_list
{
	struct s_list *next;
	void          *data;
}                 t_list;

/*
** Calcola e restituisce il numero di nodi nella lista collegata
** a partire dal puntatore `begin_list`.
**
** 1. Inizializza un contatore a 0.
** 2. Itera finché il nodo corrente non è NULL:
**    - Incrementa il contatore.
**    - Passa al nodo successivo (`next`).
** 3. Ritorna il numero totale di nodi visitati.
**
** Complessità: O(n), dove n è il numero di elementi nella lista.
*/
int	ft_list_size(t_list *begin_list)
{
	int count = 0;
	while(begin_list)
	{
		count++;
		begin_list = begin_list->next;
	}
	return(count);
}
