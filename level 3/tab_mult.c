#include <unistd.h>

void ft_putnbr(int nb)
{
    if(nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}


int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return res;
}


int main(int ac, char **av)
{
    int i = 1;
    
    if(ac == 2)
    {
        int num = ft_atoi(av[1]);
        
        while(i <= 9)
        {
            
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(num);
            write(1, " = ", 3);
            ft_putnbr(i * num);
            if(i != 9)
                write(1, "\n", 1);
            i++;
        }
    }
    write(1, "\n", 1);
}
