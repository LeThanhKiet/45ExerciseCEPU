#include <stdio.h>
int main()
{
    int m, n;
    do
    {
        printf("Nhap so hang cua ma tran: ");
        scanf("%d", &m);
        printf("Nhap so cot cua ma tran: ");
        scanf("%d", &n);
    } while (m < 1 || n < 1);
    int a[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nTBC cac phan tu ma tran: %.3f", sum * 1.0 / (m * n));
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[m - 1][i];
    }
    printf("\nTBC cac phan tu hang cuoi cung ma tran: %.3f", sum * 1.0 / n);

    return 0;
}
