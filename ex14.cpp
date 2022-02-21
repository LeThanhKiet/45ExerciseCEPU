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
        if (a[i] > 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co so duong trong mang!!!");
    }
    else
    {
        printf("\nSo duong trong mang: ");
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                printf("%.3f  ", a[i]);
            }
        }
    }
    float min;
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0 && (int)a[i] % 2 == 0 && (int)a[i] == a[i])
        {
            count++;
            min = a[i];
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
            if (a[i] > 0 && (int)a[i] % 2 == 0 && (int)a[i] == a[i] && a[i] < min)
            {
                min = a[i];
            }
        }
        printf("\nPhan tu duong chan nho nhat trong mang la: %.3f", min);
    }
    return 0;
}
