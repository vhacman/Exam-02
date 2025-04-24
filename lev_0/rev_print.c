#include <unistd.h>

// Funzione che stampa una stringa al contrario
void    rev_print(char *str)
{
	int i;

	i = 0;
	// Conta quanti caratteri ci sono nella stringa
	while (str[i] != '\0')
		i++;

	// Parte dalla fine e stampa ogni carattere all'indietro
	while (i > 0)
	{
		write(1, &str[i - 1], 1); // Stampa il carattere precedente
		i--;                      // Passa al carattere prima
	}
}

int main(int ac, char **av)
{
	// Se viene passato esattamente un argomento, stampa al contrario
	if (ac == 2)
		rev_print(av[1]);

	// Stampa sempre una newline alla fine
	write(1, "\n", 1);
	return (0);
}
