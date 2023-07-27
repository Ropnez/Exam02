#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = 0;
	int	n;
	if (end > start)
		n = end - start + 1;
	else
		n = start - end + 1;
	int	*range = (int *)malloc(sizeof(int) * n);
	if (!range)
		return (NULL);
	int	s;
	if (start > end)
		s = -1;
	else
		s = 1;
	while (i < n)
	{
		range[i] = start;
		start += s;
		i++;
	}
	return (range);
}

#include <stdio.h>

int main()
{
    int i = 0;

    int *arr = ft_range(0, -3);
    while (i < 8)
    {
        printf("%d ", arr[i]);
        i++;
    }
}

/* - With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3. */
