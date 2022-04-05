#include <stdio.h>
int main()
{
    int a, b = 1, i, j;
    printf("Enter row : ");
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < a - i; j++)
            printf(" ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0)
                b = 1;
            else
                b = b * (i - j + 1) / j;
            printf("%2d", b);
        }
        printf("\n");
    }

    return 0;
}
