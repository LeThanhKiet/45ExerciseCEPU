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
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la: %d", max);
    int count = 0;
    int maxEven;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count++;
            maxEven = a[i];
            break;
        }
    }
    if (count == 0)
    {
        printf("Khong co so chan trong mang ==> Khong co max chan!!!");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0 && a[i] > maxEven)
            {
                maxEven = a[i];
            }
        }
        printf("\nSo chan lon nhat trong mang la: %d", maxEven);
    }
    return 0;
}