unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;
	for(int i = 8; i > 0; i--)
		reversed = (reversed << 1) | (octet & 1), octet >>= 1;
	return reversed;
}

/*
#include <unistd.h>
void	print_bits(unsigned char octet)
{
	for(int i = 7; i >= 0; i--)
	{
		if((octet >> i) & 1)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
}

int	main()
{
	unsigned char octet = 98;

	write(1, "original\n", 9);	
	print_bits(octet);
	write(1, "\n", 1);
	unsigned char reversed = reverse_bits(octet);

	write(1, "reversed\n", 9);
	print_bits(reversed);
	write(1, "\n", 1);
	return 0;
}
*/
