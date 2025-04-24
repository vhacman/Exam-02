#include <unistd.h> // Include la funzione write per stampare su stdout
#include <stdio.h>  // Include la funzione printf per testare la funzione swap

// Funzione che scambia i valori di due interi usando i puntatori
void    ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;   // Salva temporaneamente il valore puntato da 'a'
	*a = *b;     // Assegna a 'a' il valore puntato da 'b'
	*b = temp;   // Assegna a 'b' il valore salvato (originariamente in 'a')
}

/*
// Funzione main di test per ft_swap
int	main(void)
{
	int	*a;
	int	*b;
	int	n1;
	int	n2;

	n1 = 9;
	n2 = 6;
	a = &n1; // 'a' punta a 'n1'
	b = &n2; // 'b' punta a 'n2'

	// Prima dello scambio
	printf("Value of n1 is: %u and the value of n2 is: %u.", *a, *b);

	ft_swap(a, b); // Esegue lo scambio

	printf("\n");
	// Dopo lo scambio
	printf("Now the value of n1 is: %u and the value of n2 is: %u.", *a, *b);
	printf("\n");
}
*/