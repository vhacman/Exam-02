unsigned int pgdc(unsigned int a, unsigned int b)
{
	while(b != 0)
	{
		unsigned int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
	if(a == 0 || b == 0)
		return 0;
	return((a / pgdc(a, b)) * b);
}