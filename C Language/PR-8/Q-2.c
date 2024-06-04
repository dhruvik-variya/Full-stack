#include <stdio.h>

int cube(int n, int a[n][n])
{
    int *ptr[n][n],i,j;
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            ptr[i][j] = &a[i][j];
        }
    }
    
    printf("cubes of all elements :\n");
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", (*ptr[i][j]) * (*ptr[i][j]) * (*ptr[i][j]));
        }
        printf("\n");
    }
}

int main()
{
    int r, c;
    int i,j;
    printf("ENter array size :");
    scanf("%d %d", &r, &c);
    int a[r][c], n;

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    cube(r, a);
    return 0;
}
