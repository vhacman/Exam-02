#include <unistd.h>

int	is_delimiter(char c)
{
	return(c == ' ' || c == '\t' || c == '\n');
}

int	skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

int	skip_word(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
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

int	word_count(char *str)
{
	int count = 0;
	int i = 0;

	while(str[i])
	{
		i = skip_space(str, i);
		if(str[i] && !is_delimiter(str[i]))
		{
			count++;
			i = skip_word(str, i);
		}
	}
	return(count);
}

char	*word_dup(char *str)
{
	int i = 0;
	int len = ft_wordlen(str);
	char *new = malloc(sizeof(char) * (len + 1));

	if(!new)
		return(NULL);
	while(i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return new;
}

char	**ft_split(char *str)
{
	int i = 0;
	int counted = word_count(str);
	int j = 0;
	char **array = malloc(sizeof(char *) * (counted + 1));

	if(!array)
		return(NULL);

	while(str[i])
	{
		i = skip_space(str, i);
		if(str[i] && !is_delimiter(str))
		{
			int len = ft_wordlen(&str[i]);
			array[j++] = word_dup(&str[i]);
			i = len + i;
		}
	}
	array[j] = NULL;
	return(array);
}
