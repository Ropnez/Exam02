#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *range;
	int i = 0;
	int n = end - start + 1;

	if (start > end)
		return (ft_range(end, start));
	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		while (i < n)
		{
			range[i] = start;
			start++;
			i++;
		}
	}
	return (range);
}