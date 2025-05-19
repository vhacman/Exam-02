char	*ft_strpbrk(const char *s1, const char *s2)
{
	while(*s1)
	{
		const char *temp = *s2;
		while(*temp)
		{
			if(*s1 == *temp)
				return(char *)s1;
			temp++;
		}
		s1++;
	}
	return 0;
}

