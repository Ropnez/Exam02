#include <stdlib.h>

char    **ft_split(char *str)
{
    int i = 0, j = 0, k = 0, len = 0;
    while (str[len])
        len++;
    char    **split = (char **)malloc(sizeof(char *) * len);
    if (!split)
        return(0);
    while (str[i])
    {
        if (str[i] > 32 && str[i])
        {
            split[j] = (char *)malloc(sizeof(char) * len);
            k = 0;
            while (str[i] > 32 && str[i])
            {
                split[j][k] = str[i];
                k++;
                i++;
            }
            split[j][k] = '\0';
            j++;
        }
        else
            i++;
    }
    split[j] = 0;
    return(split);
}