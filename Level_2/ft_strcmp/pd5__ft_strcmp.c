int ft_strcmp(char *s1, char *s2)
{
	int i;
	int return_value;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return_value = s1[i] - s2[i];
	return (return_value);
}
