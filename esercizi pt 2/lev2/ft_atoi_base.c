
int char_to_value(char c)
{
    if (c >= '0' && c <= '9')
        return(c = c - '0');
    else if(c >= 'a' && c <= 'f')
        return(c = c - 'a' + 10);
    else if(c >= 'A' && c <= 'F')
        return(c = c - 'A' + 10);
    return(-1);
}

int ft_atoi_base(char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    int value;

    while(str[i] >= 32)
        i++;
    if(str[i] == '+' || str[i] == '-')
    {
        if(str[i] == '-')
            sign = -sign;
        i++;
    }
    while((value = char_to_value(str[i]) != -1 && value < str_base))
    {
        res = res * str_base + value;
        i++;
    }
    return(res * sign);
}