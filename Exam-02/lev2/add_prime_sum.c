/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhacman <vhacman@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 23:15:52 by vhacman           #+#    #+#             */
/*   Updated: 2025/05/21 23:15:52 by vhacman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
** Verifica se `n` è un numero primo.
** - Restituisce 0 se `n` è divisibile per un intero tra 2 e n-1.
** - Restituisce 1 se nessuna divisione è esatta (quindi è primo).
**
** Nota: non gestisce `n <= 1`, ma la chiamata è protetta a monte.
*/
int is_prime(int n)
{
    int i = 2;
    while(i < n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}

/*
** Converte una stringa `str` in intero.
** - Gestisce solo segno negativo opzionale all'inizio.
** - Itera finché trova cifre decimali.
** - Non considera spazi, + o caratteri non numerici.
*/
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return res * sign;
}

/*
** Stampa un numero intero `n` su stdout in formato decimale.
** Utilizza ricorsione per stampare le cifre da sinistra a destra.
*/
void ft_putnbr(int n)
{
    if(n >= 10)
        ft_putnbr(n / 10);
    char c = n % 10 + '0';
    write(1, &c, 1);
}

/*
** Calcola la somma di tutti i numeri primi da 2 a `n` inclusi.
** Usa `is_prime` per verificare ogni numero intermedio.
*/
int add_prime_sum(int n)
{
    int sum = 0;
    int i = 2;

    while(i <= n)
    {
        if(is_prime(i))
            sum += i;
        i++;
    }
    return sum;
}

/*
** Main:
** - Se riceve un argomento numerico:
**     - Converte in intero `n`
**     - Se `n > 1`, calcola e stampa la somma dei primi fino a `n`
**     - Altrimenti stampa 0
** - Se non riceve 1 argomento, stampa 0
** - Sempre termina con newline
**
** Esempio:
** ./a.out 10 → 2 + 3 + 5 + 7 = 17
*/
int main(int ac, char **av)
{
    if (ac == 2)
    {
        int n = ft_atoi(av[1]);
        if(n == 0)
            return 0;
        if (n > 1)
            ft_putnbr(add_prime_sum(n));
        else
            ft_putnbr(0);
    }
    else
        ft_putnbr(0);
    write(1, "\n", 1);
    return 0;
}
