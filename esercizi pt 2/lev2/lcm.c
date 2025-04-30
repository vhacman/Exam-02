unsigned int pgdc(unsigned int a, unsigned int b)
{
    if(b != 0)
    {
        unsigned int temp = a;
        b = a % b;
        a = temp;
    }
    return(a);
}

unsigned int    lcm(unsigned int a, unsigned int b)
{
    if(a > b && b > 0)
        return(a / pgdc(a, b) * b);
}
