
// int is_power_of_2(unsigned int n)
// {
//     if (n == 0)
//         return(0);
//     while(n % 2 == 0)
//         n = n / 2;
//     return(n == 1);
// }

int is_power_of_2(unsigned int n)
{
    return(n > 0 && (n & (n - 1)) == 0);
}
// #include <stdio.h>

// int main(void)
// {
//     unsigned int tests[] = {0, 1, 2, 3, 4, 5, 8, 16, 31, 32, 33};
//     int i = 0;

//     while (i < 11)
//     {
//         printf("%u -> %d\n", tests[i], is_power_of_2(tests[i]));
//         i++;
//     }
//     return 0;
// }