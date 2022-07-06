#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    n++;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j == i + 1 || j == 2 * n - i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j == i + 1 || j == 2 * n - i - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return (0);
}