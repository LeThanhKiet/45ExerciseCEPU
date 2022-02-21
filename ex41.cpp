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
            printf("%.3f  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((int)a[i][j] % 5 == 0 && (int)a[i][j] == a[i][j])
            {
                count++;
                break;
            }
        }
    }
    if (count == 0)
    {
        printf("\nKhong co so chia het cho 5 trong ma tran!!!");
    }
    else
    {
        printf("\nCac so chia het cho 5 trong ma tran: ");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if ((int)a[i][j] % 5 == 0 && (int)a[i][j] == a[i][j])
                {
                    printf("%.3f  ", a[i][j]);
                }
            }
        }
    }
    float max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        if (a[0][i] > max)
        {
            max = a[0][i];
        }
    }
    printf("\nGia tri lon nhat tren hang 1: %.3f ", max);
    return 0;
}