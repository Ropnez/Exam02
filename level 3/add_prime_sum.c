#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    while (str[i] && str[i] >= '0' && str[i] <= '9')
        res = (res * 10) + (str[i++] - '0');
    return (res);
}

void ft_print(int nb)
{
    if (nb > 9)
        ft_print(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
    {

        int toplam, i, num, sayac;
        int sayi = ft_atoi(av[1]);
        num = 1;
        while (num <= sayi)
        {
            sayac = 0;
            i = 2;
            while (i <= num / 2)
            {
                if (num % i == 0)
                {
                    sayac++;
                    break;
                }
                i++;
            }
            if (sayac == 0 && num != 1)
               toplam += num;
            num++;
        }
        ft_print(toplam);
    }
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}