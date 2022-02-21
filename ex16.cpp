#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 1);
    int a[10];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    printf("Cac phan tu cua mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i += 2)
    {
        sum += a[i];
    }
    printf("\nTong cac phan tu o vi tri chan la: %d", sum);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu chan trong mang!!!");
    }
    else
    {
        printf("\nCac phan tu chan cua mang la: ");
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                printf("%d  ", a[i]);
            }
        }
    }
    return 0;
}