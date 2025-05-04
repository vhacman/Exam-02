

// unsigned char reverse_bits(unsigned char octet)
// {
//     unsigned char reversed = 0;
//     int i = 8;
//     while(i > 0)
//     {
//         reversed = (reversed << 1) | (octet & 1);
//         octet = octet >> 1;
//         i--;
//     }
//     return(reversed);
// }


unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char reversed = 0;

	for (int i = 0; i < 8; i++)
		reversed = (reversed << 1) | (octet & 1), octet >>= 1;
	return reversed;
}
