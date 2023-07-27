#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	i = 0;
	int	n;
	if (end > start)
		n = end - start + 1;
	else
		n = start - end + 1;
	int	*rrange = (int *)malloc(sizeof(int) * n);
	if (!rrange)
		return (NULL);
	int	s;
	if (start > end)
		s = -1;
	else
		s = 1;
	while (i < n)
	{
		rrange[i] = end;
		end -= s;
		i++;
	}
	return (rrange);
}

#include <stdio.h>

int main()
{
    int i = 0;

    int *arr = ft_rrange(0, -3);
    while (i < 5)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

/* - With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0. */
