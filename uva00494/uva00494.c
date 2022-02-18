#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
	char a[1000];
	int sum = 0, i;
	while (gets(a))
	{

		int b[1000];
		sum = 0;
		for (i = 0; i < strlen(a); i++)
		{
			if (isalpha(a[i]) != 0 && isalpha(a[i + 1]) == 0)
			{
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}