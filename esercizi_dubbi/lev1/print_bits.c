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

/*
int main()
{
	unsigned char octet = 12;

	print_bits(octet);
	write(1, "\n", 1);
	return 0;
}
*/
