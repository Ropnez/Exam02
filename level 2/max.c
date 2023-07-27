int		max(int *tab, unsigned int len)
{
    if (len <= 0)
    {
	unsigned int i = 0;
    	int max = tab[i];
        while(i < len)
        {
            if(max < tab[i])
                max = tab[i];
            i++;
        }
        return max;
    }
    return 0;
}

#include <stdio.h>

int main()
{

	int arr[] = {-5000, -10, -54, -1};
	printf("%d", max(arr, 4));
}
