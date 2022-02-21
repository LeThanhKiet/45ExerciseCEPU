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
        printf("Nhap [%d]: ", i);
        scanf("%f", &a[i]);
    }
    printf("Cac phan tu cua mang: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f  ", a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nMang giam dan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.3f ", a[i]);
    }
    int count = 0;
    float minNegative;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            count++;
            minNegative = a[i];
            break;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co so duong trong mang ==> khong co so duong min");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0 && a[i] < minNegative)
            {
                minNegative = a[i];
            }
        }
        printf("\nSo duong nho nhat trong mang la: %.3f", minNegative);
    }
    return 0;
}
