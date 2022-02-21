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
    float x;
    printf("\nNhap x: ");
    scanf("%f", &x);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 1)
    {
        printf("%.3f co trong mang!!!", x);
    }
    else
    {
        printf("%.3f khong co trong mang!!!");
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
        printf("\nKhong co so duong trong mang ==> khong co trung binh cong!!!");
    }
    else
    {
        float sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > 0)
            {
                sum += a[i];
            }
        }
        printf("\nTrung binh cong cac so duong co trong mang la: %.3f", sum / count);
    }
    return 0;
}