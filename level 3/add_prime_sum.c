#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	if (nb > 9)
		ft_putnbr(nb / 10);
	write(1, &"0123456789"[nb % 10], 1);
}

int	ft_atoi(char *str)
{
	int	i = 0;
	int	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}

int ft_is_prime(int num)
{
	int i = 2;
	if(num < 2)
		return 0;
	while (i < num)
	{
		if(num % i == 0)
			return 0;
		i++;
	}
	return 1;
}


int main(int ac, char **av)
{
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        int sum = 0;
        while(num)
        {
            if(ft_is_prime(num))
            	sum += num;
            num--;
        }
        ft_putnbr(sum);
    }
	else
		write(1, "0", 1);
	write(1, "\n", 1);
}

/* int ft_is_prime(int num)
{
    if(num <= 1)
        return(0);
    else if(num % 2 == 0 && num > 2)
        return(0);
    else if(num % 3 == 0 && num > 3)
        return(0);
    return(1);
} */
