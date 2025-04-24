#include <unistd.h> // Include la funzione write per stampare su stdout

// Funzione che stampa ogni lettera del parametro ripetuta secondo la sua posizione nell'alfabeto
void    repeat_alpha(char *str)
{
	int i;
	char c;
	int repeat;

	i = 0;
	// Scorre ogni carattere della stringa
	while (str[i] != '\0')
	{
		c = str[i];       // Salva il carattere attuale
		repeat = 1;       // Di default stampa almeno una volta

		// Se il carattere è minuscolo, calcola la posizione da 'a'
		if (c >= 'a' && c <= 'z')
			repeat = c - 'a' + 1;
		// Se è maiuscolo, calcola la posizione da 'A'
		else if (c >= 'A' && c <= 'Z')
			repeat = c - 'A' + 1;

		// Stampa il carattere "repeat" volte
		while (repeat--)
			write (1, &c, 1);
		i++; // Passa al carattere successivo
	}
}

int main(int ac, char **av)
{
	// Se è presente esattamente un argomento
	if (ac == 2)
		repeat_alpha(av[1]);

	// Stampa sempre una newline
	write(1, "\n", 1);
	return (0);
}
