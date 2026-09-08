char	*ft_strrev(char *str)
{
	int left;
	int right;
	char temp;

	left = 0;
	right = 0;
	while (str[right])
		right++;
	right--;
	while (left < right)
	{
		temp = str[left];
		str[left] = str[right];
		str[right] = temp;
		left++;
		right--;
	}
	return(str);
}