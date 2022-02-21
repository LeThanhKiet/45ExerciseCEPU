#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 1);
    float a[10];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap a[%d]: ", i);
        scanf("%f", &a[i]);
    }
    printf("Cac phan tu cua mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    float min = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    printf("\nGia tri nho nhat trong mang la: %.3f", min);
    int count = 0;
    float maxNegative;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
            maxNegative = a[i];
            break;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co so am trong mang ==> Khong co So am max");
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0 && a[i] > maxNegative)
            {
                maxNegative = a[i];
            }
        }
        printf("\nSo am lon nhat trong mang la: %.3f", maxNegative);
    }
    return 0;
}