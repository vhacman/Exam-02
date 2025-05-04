#include <unistd.h>
#include <stdlib.h>

int is_delimiter(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int skip_space(char *str, int i)
{
	while(str[i] && is_delimiter(str[i]))
		i++;
	return i;
}

int word_len(char *str)
{
	int i = 0;
	while(str[i] && !is_delimiter(str[i]))
		i++;
	return i;
}

int skip_word(char *str, int i)
{
	while(str[i] && !is_delimiter(str[i]))
		i++;
	return i;
}
int word_count(char *str)
{
	int i = 0;
	int count = 0;

	while(str[i])
	{
		i =  skip_space(str, i);
		if(str[i] && !is_delimiter(str[i]))
		{
			count++;
			i = skip_word(str, i);
		}
	}
	return (count);
}

char    *word_dup(char *str)
{
	int i = 0;
	int len = word_len(str);
	char *new = malloc(sizeof(char) * (len + 1));
	if(!new)
		return NULL;
	while(i < len)
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

char    **ft_split(char *str)
{
	int i = 0;
	int j = 0;
	int counted = word_count(str);
	char **array = malloc(sizeof(char *) * (counted + 1));
	if(!array)
		return NULL;
	while(str[i])
	{
		i = skip_space(str, i);
		if(str[i] && !is_delimiter(str[i]))
		{
			int len = word_len(&str[i]);
			array[j++] = word_dup(&str[i]);
			i = len + i;
		}
	}
	array[j] = NULL;
	return(array);
}

// #include <stdio.h>

// int main()
// {
//     char str[] = "Hello  world  this is  a test";

//     // Call ft_split to split the string
//     char **result = ft_split(str);

//     // Print the result
//     if (result)
//     {
//         int i = 0;
//         while (result[i] != NULL)
//         {
//             printf("Word %d: %s\n", i + 1, result[i]);
//             free(result[i]); // Free each allocated word
//             i++;
//         }
//         free(result); // Free the array of pointers
//     }
//     else
//     {
//         printf("Memory allocation failed\n");
//     }

//     return 0;
// }