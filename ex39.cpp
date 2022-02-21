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
    float a[10][10];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    float sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += a[i][j];
        }
    }
    printf("\nTBC cac phan tu ma tran : %.3f", sum / (m * n));
    int k;
    do
    {
        printf("Nhap hang k: ");
        scanf("%f", &k);
    } while (k < 1 || k > m);
    float prod = 1;
    for (int i = 0; i < n; i++)
    {
        prod *= a[k - 1][i];
    }
    printf("\nTich phan tu hang %d la: %.3f", k, prod);
    return 0;
}