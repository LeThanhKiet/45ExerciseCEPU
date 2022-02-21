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
    float a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%.3f   ", a[i][j]);
        }
        printf("\n");
    }
    int k;
    do
    {
        printf("Nhap hang k: ");
        scanf("%d", &k);
    } while (k < 0 || k > n);
    float sum = 0;
    for (int i = 0; i < m; i++)
    {
        sum += a[k - 1][i];
    }
    printf("\nTong cac phan tu tren hang %d la: %.3f", k, sum);
    float max = a[0][0];
    int x, y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
                x = i + 1;
                y = j + 1;
            }
        }
    }
    printf("\nMax ma tran = %.3f tai vi tri a[%d][%d]!!!", max, x, y);
    return 0;
}
