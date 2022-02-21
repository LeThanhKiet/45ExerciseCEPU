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
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nMa tran khong co phan tu le!!!");
    }
    else
    {
        printf("\nPhan tu le trong ma tran: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] < 0)
                {
                    printf("%d  ", a[i][j]);
                }
            }
        }
    }
    int k;
    do
    {
        printf("Nhap cot k: ");
        scanf("%d", &k);
    } while (k < 1 || k > n);
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[i][k - 1];
    }
    printf("\nTBC phan tu cot %d la: %.3f", k, sum * 1.0 / m);
    return 0;
}