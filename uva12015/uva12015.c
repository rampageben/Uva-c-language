#include <stdio.h>
struct fun
{
    char a[100];
    int num;
};

int main(void)
{
    int n, i, max = -1, j = 1;
    struct fun b[10];
    scanf("%d", &n);
    while (n--)
    {
        max = -1;
        for (i = 0; i < 10; i++)
        {
            scanf("%s", &b[i]);
            scanf("%d", &b[i].num);
            if (b[i].num > max)
            {
                max = b[i].num;
            }
        }
        printf("Case #%d:\n", j);
        for (i = 0; i < 10; i++)
        {
            if (b[i].num == max)
            {
                puts(b[i].a);
            }
        }
        j++;
    }
    return 0;
}