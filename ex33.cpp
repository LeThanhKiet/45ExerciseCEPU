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
    int max = a[0][0];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\nGia tri lon nhat trong ma tran: %d", max);
    int count = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] < 0 && a[i][j] % 5 == 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu am chia het 5!!!");
    }
    else
    {
        printf("\nTim thay phan tu am chia het cho 5 la: ");
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (a[i][j] < 0 && a[i][j] % 5 == 0)
                {
                    printf("\n%d tai vi tri a[%d][%d]!!!", a[i][j], i + 1, j + 1);
                }
            }
        }
    }
    return 0;
}
