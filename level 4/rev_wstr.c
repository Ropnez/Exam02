#include <stdlib.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

char    **ft_split(char *str)
{
    int i = 0, a = 0, b = 0, len = 0;

    while (str[++len]);

    char **split = (char **)malloc(sizeof(char *) * len);

    if(!split)
        return 0;

    while (str[i])
    {
        if(str[i] > 32 && str[i])
        {
            split[a] = (char *)malloc(sizeof(char) * len);
            
            b = 0;    
            
            while (str[i] > 32 && str[i])
            {
                split[a][b] = str[i];
                b++;
                i++;
            }
            split[a][b] = '\0';
            a++;
        }
        else
            i++;
    }
    if (a == 0) // Sadece boşluk karakterleri varsa
    {
        free(split);
        return 0;
    }
    split[a] = 0;
    return split;
}

int main(int ac, char **av)
{
    int i = 0;
    char **tab = ft_split(av[1]); 
    
    if(ac == 2)
    {
        while (tab[++i]);
        while (tab[--i])
        {
            ft_putstr(tab[i]);
            if(i > 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}
