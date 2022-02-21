#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap cap ma tran: ");
        scanf("%d", &n);
    } while (n < 1);
    float a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ");
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nHang 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[0][i]);
    }
    int k = 0;
    while (k < n)
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[k][i];
        }
        printf("\nTong hang %d la: %.3f", k, sum);
        k++;
    }
    return 0;
}