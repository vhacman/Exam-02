#include <unistd.h>

void    rstr_capitalizer(char *str)
{
    int i = 0;

    
    while(str[i])
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;
        if(str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0'))
            str[i] = str[i] - 32;
        write(1, &str[i], 1);
        i++;
    }
}



int main(int ac, char **av)
{
    int i = 1;

    if(ac == 1)
        write(1, "\n", 1);
    while(i < ac)
    {
        rstr_capitalizer(av[i]);
        write(1, "\n", 1);
        i++;
    }
    return(0);
}