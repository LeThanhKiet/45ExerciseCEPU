#include <stdio.h>
int main(int argc, char const *argv[])
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
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    float min = a[0][0];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] < min)
            {
                min = a[i][j];
            }
        }
    }
    printf("\nMin trong ma tran la: %.3f", min);
    int k;
    do
    {
        printf("\nNhap cot k: ");
        scanf("%d", &k);
    } while (k < 1 || k > m);
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][k - 1];
    }
    printf("\nTong cot %d la: %.3f", k, sum);

    return 0;
}
