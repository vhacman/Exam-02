#include <unistd.h>

void    print_bits(unsigned char octet)
{
    int i = 7;
    char bit;

    while(i >= 0)
    {
        bit = (octet >> i) & 1;
        bit = bit + '0';
        write(1, &bit, 1);
        i--;
    }
}

// #include <stdlib.h>
// #include <stdio.h>

// int main (int argc, char **argv)
// {
//     unsigned char octet;

//     if (argc == 2) 

//     octet = atoi(argv[1]);
//     print_bits(octet);
//     printf("\n");

//     return 0;

// }