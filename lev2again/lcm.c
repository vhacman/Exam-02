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
    if(a == 0 || b == 0)
        return(0);
    return((a / pgdc(a, b)) * b);
}
