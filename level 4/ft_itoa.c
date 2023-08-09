#include <stdlib.h>

char    *ft_itoa(int nbr)
{
    int len = 0;
    int n = nbr;
    
    if (nbr == -2147483648)
        return("-2147483648");
    if (nbr <= 0)
        len++;
    while(n)
    {
        len++;
        n /= 10;
    }
    char *itoa = (char *)malloc(sizeof(char) * (len + 1));
    if (!itoa)
        return(NULL);
    itoa[len] = '\0';
    if(nbr == 0)
    {
        itoa[0] = '0';
        return(itoa);
    }
    if (nbr < 0)
    {
        itoa[0] = '-';
        nbr = -nbr;        
    }
    while (nbr)
    {
        itoa[--len] = (nbr % 10) + '0';
        nbr /= 10;
    }
    return(itoa);
}