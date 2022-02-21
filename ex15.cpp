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
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\nTrung binh cong cac gia tri trong mang la: %.3f", sum * 1.0 / n);
    int count = 0;
    int min;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && a[i] % 2 == 0)
        {
            min = a[i];
            count++;
            break;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co so duong chan trong mang!!!");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && a[i] % 2 == 0 && a[i] < min)
            {
                min = a[i];
            }
        }
        printf("\nSo duong chan nho nhat trong mang la: %d", min);
    }
    return 0;
}