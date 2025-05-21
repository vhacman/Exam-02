/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:24:04 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:24:04 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Struttura per rappresentare una coordinata (x, y) su una griglia. -->DA AHHIUNGERE IN header
*/
typedef struct s_point
{
	int x;
	int y;
} t_point;

/*
** Funzione ricorsiva di riempimento dell'area.
**
** Parametri:
** - tab: griglia bidimensionale di caratteri
** - size: dimensioni massime della griglia (size.x, size.y)
** - cur: posizione corrente da valutare
** - to_fill: carattere di riferimento da sostituire con 'F'
**
** Logica:
** 1. Controlla se la posizione corrente `cur` è fuori dai limiti della griglia.
** 2. Controlla se il carattere in posizione corrente è diverso da `to_fill`.
**    In entrambi i casi, termina la chiamata ricorsiva.
**
** 3. Sostituisce il carattere in posizione `cur` con 'F'.
** 4. Richiama ricorsivamente `fill` in tutte e 4 le direzioni:
**    destra, sinistra, sotto, sopra.
**
** Questo algoritmo è un classico "flood fill" in stile DFS (Depth First Search).
*/
void fill(char **tab, t_point size, t_point cur, char to_fill)
{
	if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y
		|| tab[cur.y][cur.x] != to_fill)
		return;

	tab[cur.y][cur.x] = 'F';

	fill(tab, size, (t_point){cur.x + 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, to_fill);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, to_fill);
}

/*
** Funzione principale di flood fill:
** - Riceve la griglia `tab`, le sue dimensioni `size`, e la posizione iniziale `begin`
** - Recupera il carattere da sostituire partendo da tab[begin.y][begin.x]
** - Avvia la funzione ricorsiva `fill`
*/
void flood_fill(char **tab, t_point size, t_point begin)
{
	fill(tab, size, begin, tab[begin.y][begin.x]);
}

/*
** // Esempio d'uso:
** // Copia la mappa, esegue il flood fill, e stampa il risultato.
**
** #include <stdlib.h>
** #include <stdio.h>
**
** char** make_area(char** zone, t_point size)
** {
**     char** new = malloc(sizeof(char*) * size.y);
**     for (int i = 0; i < size.y; ++i)
**     {
**         new[i] = malloc(size.x + 1);
**         for (int j = 0; j < size.x; ++j)
**             new[i][j] = zone[i][j];
**         new[i][size.x] = '\0';
**     }
**     return new;
** }
**
** int main(void)
** {
**     t_point size = {8, 5};
**     char *zone[] = {
**         "11111111",
**         "10001001",
**         "10010001",
**         "10110001",
**         "11100001",
**     };
**
**     char** area = make_area(zone, size);
**     for (int i = 0; i < size.y; ++i)
**         printf("%s\n", area[i]);
**     printf("\n");
**
**     t_point begin = {7, 4};
**     flood_fill(area, size, begin);
**     for (int i = 0; i < size.y; ++i)
**         printf("%s\n", area[i]);
**     return 0;
** }
*/
