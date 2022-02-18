#include <stdio.h>

int main(void)
{
	int n, j, i, sum;
	while (scanf("%d", &n), n != 0)
	{
		sum = 0;
		for (i = 1; i < n + 1; i++)
		{
			sum = sum + i * i;
		}
		printf("%d\n", sum);
	}
	return 0;
}