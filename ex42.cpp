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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] % 2 != 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu le trong ma tran!!!");
    }
    else
    {
        printf("\nCo %d phan tu le trong ma tran!!!", count);
    }
    count = 0;
    for (int i = 0; i < m; i++)
    {
        if (a[0][i] % 2 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nHang 1 cua ma tran khong co phan tu chan!!!");
    }
    else
    {
        printf("\nPhan tu chan hang 1: ");
        for (int i = 0; i < m; i++)
        {
            if (a[0][i] % 2 == 0)
            {
                printf("%d  ", a[0][i]);
            }
        }
    }
    return 0;
}
