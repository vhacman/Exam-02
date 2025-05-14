unsigned int pgdc(unsigned int a, unsigned int b)
{
	unsigned int temp = 0;
	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}


unsigned int lcm(unsigned int a, unsigned int b)
{
	if((int)a <= 0 || (int)b <= 0)
		return 0;
	return((a / pgdc(a, b)) * b);
}

		
#include <unistd.h>
#include <stdio.h>


//int main(void)
//{
//    printf("LCM of 3 and 5: %u\n", lcm(3, 5));       // Expected: 15
//    printf("LCM of 4 and 6: %u\n", lcm(-4, 6));       // Expected: 0
//    printf("LCM of 10 and 0: %u\n", lcm(10, 0));     // Expected: 0
//    printf("LCM of 0 and 0: %u\n", lcm(0, 0));       // Expected: 0
//    printf("LCM of 21 and 6: %u\n", lcm(21, 6));     // Expected: 42
//    printf("LCM of 1 and 1: %u\n", lcm(1, 1));       // Expected: 1
//
//    return 0;
//}
