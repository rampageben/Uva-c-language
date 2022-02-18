#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    char a[100][100];
    int max = 0;
    int i = 0, k, j;
    while (scanf("%[^\n]", a[i]) != EOF)
    {
        getchar();
        if (strlen(a[i]) > max)
        {
            max = strlen(a[i]);
        }
        i++;
    }
    for (j = 0; j < max; j++)
    {
        for (k = i - 1; k >= 0; k--)
        {
            if (strlen(a[k]) > j)
            {
                printf("%c", a[k][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}