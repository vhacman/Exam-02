int	char_to_value(char c)
{
	if(c >= '0' && c <= '9')
		return(c = c - '0');
	if(c >= 'a' && c <= 'f')
		return(c - 'a' + 10);
	if(c >= 'A' && c <= 'F')
		return(c - 'A' + 10);
	return(-1);
}

int	ft_atoi_base(const char *str, unsigned int base)
{
	int i = 0;
	int result = 0;
	int sign = 1;
	int value = 0;


	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
			i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}

	while((int)(value = char_to_value(str[i])) != -1 && value < base)
	{
		result = result * base + value;
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi_base("10", 2));       // 2
// 	printf("%d\n", ft_atoi_base("1f", 16));       // 31
// 	printf("%d\n", ft_atoi_base("-1E", 16));      // -30
// 	printf("%d\n", ft_atoi_base("   \t+123", 10)); // 123
// 	printf("%d\n", ft_atoi_base("7b", 16));        // 123
// 	return (0);
// }