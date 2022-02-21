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
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu am trong mang");
    }
    else
    {
        printf("\nCac phan tu am trong mang la: ");
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                printf("%.3f  ", a[i]);
            }
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 30 && a[i] <= 150.5)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co gia tri trong khoang 30 ==> 150.5");
    }
    else
    {
        printf("\nCo %d gia tri trong khoang 30 ==> 150.5", count);
    }
    return 0;
}
