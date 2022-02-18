#include <stdio.h>
#include <string.h>

char outbuf[1000];
int main(void)
{
    int i, tmp = 1;
    ;
    char a[1000];
    while (gets(a))
    {

        for (i = 0; i < strlen(a); i++)
        {
            if (a[i] == '"' && tmp == 1)
            {
                printf("``");
                tmp = 0;
            }
            else if (a[i] == '"' && tmp == 0)
            {
                printf("''");
                tmp = 1;
            }
            else
            {
                printf("%c", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}