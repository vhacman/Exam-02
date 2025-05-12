unsigned int pgdc(unsigned int a, unsigned int b)
{
    int temp = 0;

    while(b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return(a);
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    if((int)a <= 0 || (int)b <= 0)
        return(0);
    return((a / pgdc(a, b)) * b);
}
