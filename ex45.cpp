#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 2 || n > 5);
    int a[10][10];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Nhap a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Ma tran: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    int k;
    do
    {
        printf("Nhap hang k: ");
        scanf("%d", &k);
    } while (k < 1 || k > n);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[k - 1][i] > 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nHang %d khong co so duong!!!", k);
    }
    else
    {
        printf("\nHang %d co %d so duong!!!", k, count);
    }
    return 0;
}