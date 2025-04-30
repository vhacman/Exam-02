unsigned char swap_bits(unsigned char octet)
{
    return((octet >> 4) | (octet << 4));
}


// #include <unistd.h>
// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		unsigned char c = argv[1][0];
// 		printf("Original char: %c (ASCII %d)\n", c, c);
// 		c = swap_bits(c);
// 		printf("Swapped char: %c (ASCII %d)\n", c, c);
// 	}
// 	return (0);
// }