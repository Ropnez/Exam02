#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i = 0, len = 0;
	char	temp;

	while (str[len] != '\0')
		len++;
	while (--len > i)
	{
		temp = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
	}
	return (str);
}
