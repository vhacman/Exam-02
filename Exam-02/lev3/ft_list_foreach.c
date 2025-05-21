/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:25:35 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:25:35 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Struttura di nodo per lista concatenata.
** - `data`: puntatore generico al contenuto del nodo.
** - `next`: puntatore al nodo successivo.
*/
typedef struct s_list
{
    struct s_list *next;
    void          *data;
} t_list;

/*
** Applica la funzione `f` a ogni elemento `data` della lista `begin_list`.
**
** - Itera sulla lista con un ciclo `while`.
** - Per ogni nodo, chiama `f` passando `begin_list->data` come argomento.
**
** La funzione `f` deve avere la firma: `void f(void *)`.
**
** Esempio d'uso:
** - stampare ogni elemento
** - modificare ogni elemento in-place
*/
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while (begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list->next;
    }
}
