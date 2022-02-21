#include <stdio.h>
int main()
{
    int n, m;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &n);
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &m);
    } while (n < 1 || m < 1);
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nTong cac phan tu ma tran = %d ", sum);
    int min = a[0][0];
    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    printf("\nMin ma tran = %d tai vi tri a[%d][%d]!!!", min, x, y);
    return 0;
}
