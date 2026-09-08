#include <stdlib.h>

int ft_strlen(char *src)
{
	int size;

	size = 0;
	while (src[size])
		size++;
	return(size);
}

char	*ft_strdup(char *src)
{
	char *str;
	int i;
	int len;

	i = 0;
	len = ft_strlen(src);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}