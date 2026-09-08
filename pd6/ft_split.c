#include <stdlib.h>

int is_sep(char c)
{
	if (c == '\t' || c == ' ' || c == '\n')
		return (1);
	else 
		return (0);
}

int count_words(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if(str[i])
			count;
		while (str[i] && !is_sep(str[i]))
			i++;
	}
	return (count);
}

char *copywriter(char *str, int start, int end)
{
	int length;
	int i;
	char *word_str;

	length = end - start;
	word_str = malloc(length + 1);
	if (!word_str)
		return (NULL);
	i = 0;
	while(start < end)
	{
		word_str[i] = str[start];
		i++;
		start++;
	}
	word_str[i] = '\0';
	return (word_str);
}

char	**ft_split(char *str)
{
	int words;
	char **result;
	int start;
	int end;
	int i;
	int index;

	words = count_words(str);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return(NULL);
	i = 0;
	index = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (!str[i])
			break;
		start = i;
		while (str[i] && !is_sep(str[i]))
			i++;
		end = i;
		result[index] = copywriter(str, start, end);
		index++;	
	}
	result[index] = NULL;
	return (result);
}