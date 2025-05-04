#include <unistd.h>

// void    print_bits(unsigned char octet)
// {
//     int i = 7;
//     unsigned char bit;

//     while(i >= 0)
//     {
//         bit = ((octet >> i) & 1) + '0';
//         write(1, &bit, 1);
//         i--;
//     }
// }


#include <unistd.h>

void	print_bits(unsigned char octet)
{
	for (int i = 7; i >= 0; i--)
	{
		if ((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}
