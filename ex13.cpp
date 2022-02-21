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
        printf("%.3f ", a[i]);
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
        printf("\nKhong co phan tu > 0 trong mang ==> Khong co TBC!!!");
    }
    else
    {
        printf("Cac phan tu lơn hon 0 trong mang la: ");
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                printf("%.3f ", a[i]);
                sum += a[i];
            }
        }
        printf("\nTBC cac phan tu lon hon 0 trong mang la: %.3f", sum / count);
    }

    return 0;
}
