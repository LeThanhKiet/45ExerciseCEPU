#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap cap cua ma tran: ");
        scanf("%d", &n);
    } while (n < 1);
    float a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nCot 1: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i][0]);
    }
    int k = 0;
    while (k < n)
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += a[i][k];
        }
        printf("\nTong cac phan tu cot %d la: %.3f", k, sum);
        k++;
    }
    return 0;
}