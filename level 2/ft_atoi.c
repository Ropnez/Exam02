int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	else if (str[i] == '+')
	{
		i++;
		if (str[i] == '-' || str[i] == '+')
			return (0);
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int	main(void)
{
	printf("%d", ft_atoi("             +1234 asd  231"));
}
