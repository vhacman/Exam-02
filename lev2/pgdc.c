
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