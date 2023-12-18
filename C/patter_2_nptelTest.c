#include <stdio.h>
void print_rectangle(int m,int n);
void main()
{
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    print_rectangle(rows, columns);
}
void print_rectangle(int m, int n)
{
    int i, j;
    for (i = 0; i < m; i++)
    {
        if (i == 0 || i == m - 1)
        {
            for (j = 0; j < n; j++)
            {
                printf("*");
            }
        }
        else
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0 || j == n - 1)
                {
                    printf("*");
                }
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
