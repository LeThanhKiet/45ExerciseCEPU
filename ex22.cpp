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
    printf("Cac phan tu cua mang la: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > 9)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu lon hon 9 trong mang!!!");
    }
    else
    {
        printf("\nCac phan tu lon hon 9 trong mang la: ");
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 9)
            {
                printf("%d  ", a[i]);
            }
        }
    }
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 7 == 0)
        {
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu chia het cho 7 trong mang ==> khong co TBC");
    }
    else
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 7 == 0)
            {
                sum += a[i];
            }
        }
        printf("\nTrung binh cong cac phan tu chia het cho 7 la: %.3f", sum * 1.0 / count);
    }
    return 0;
}