#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	is_delimiter(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

int	skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

int	ft_wordlen(char *str)
{
	int i = 0;

	while(str[i] && !is_delimiter(str[i]))
		i++;
	return i;
}

int	count_word(char *str)
{
	int i = 0;
	int count = 0;

	i = skip_space(str, i);
	while(str[i])
	{
		if(!is_delimiter(str[i]))
		{
			count++;
			while(str[i] && !is_delimiter(str[i]))
				i++;
		}
		else
			i++;
	}
	return count;
}

char	*word_dup(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *new = malloc(sizeof(char) * (len + 1));
	if(!new)
		return NULL;

	while(i < len)
	{
		if(!is_delimiter(str[i]))
		{
			new[i] = str[i];
			i++;
		}
		else
			i++;
	}
	new[i] = '\0';
	return new;
}

char	**ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int counted = count_word(str);
	char **array = malloc(sizeof(char *) * (counted + 1));
	if(!array)
		return NULL;
	
	while(str[i])
	{
		if(str[i] && !is_delimiter(str[i]))
		{
			int len = ft_wordlen(&str[i]);
			array[j++] = word_dup(&str[i]);
			i = len + i;
		}
		else
			i++;
	}
	array[j] = NULL;
	return array;
}

int	main()
{
	char *str = "la mamma fa la spesa al supermercato";
	char **result = ft_split(str);

	printf("%s\n", result[0]);
	printf("%s\n", result[1]);
	printf("%s\n", result[2]);
	printf("%s\n", result[3]);
	printf("%s\n", result[4]);
	printf("%s\n", result[5]);
	printf("%s\n", result[6]);
	return 0;
}

