#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;

    if(ac > 1)
    {
        while(av[1][i] <= 32 && av[1][i])
            i++;
        while(av[1][i] > 32 && av[1][i])
            i++;
        while(av[1][i])
        {
            if(av[1][i] > 32)
            {
                while(av[1][i] > 32)
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
            else
                i++;
        }
        while(av[1][j] <= 32)
            j++;
        while(av[1][j] > 32)
        {
            write(1, &av[1][j], 1);
            j++;
        }
    }
    write(1, "\n", 1);
}