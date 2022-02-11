#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, m, i, num = 0, x, c = 1, tmp;
    while (scanf("%d%d", &n, &m) != EOF)
    {
        num = 0;
        c = 1;
        printf("%d %d ", n, m);
        if (n > m)
        {
            tmp = n;
            n = m;
            m = tmp;
        }
        for (i = n; i <= m; i++)
        {
            c = 1;
            x = i;
            while (x != 1)
            {
                if (x % 2 == 1)
                {
                    x = 3 * x + 1;
                }
                else
                {
                    x = x / 2;
                }
                c++;
            }
            if (num < c)
            {
                num = c;
            }
        }
        printf("%d\n", num);
    }

    return 0;
}