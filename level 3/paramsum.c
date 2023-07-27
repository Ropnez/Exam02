#include <unistd.h>

void ft_putnbr(int nb)
{
    if(nb > 9)
        ft_putnbr(nb / 10);
    write(1, &"0123456789"[nb % 10], 1);
}
int main(int ac, char **av)
{
    (void)av;
    ft_putnbr(ac - 1);
    write(1, "\n", 1);
}
