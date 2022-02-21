#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap cap ma tran: ");
        scanf("%d", &n);
    } while (n < 1);
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
            {
                count++;
            }
        }
    }
    if (count == 0)
    {
        printf("\nMa tran ko co phan tu chan!!!");
    }
    else
    {
        printf("\nPhan tu chan trong ma tran: ");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("%d  ", a[i][j]);
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i][i];
    }
    printf("\nTong phan tu duong cheo chinh : %d", sum);
    return 0;
}