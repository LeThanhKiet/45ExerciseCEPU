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
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= 10.5 && a[i] <= 100)
        {
            sum += a[i];
            count++;
        }
    }
    if (count == 0)
    {
        printf("\nKhong co phan tu nam trong khoang 10.5 ==> 100 ==> khong co TBC");
    }
    else
    {
        printf("\nTrung binh cong cac phan tu trong khoang 10.5 ==> 100 la: %.3f", sum / count);
    }
    float max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la: %.3f", max);
    return 0;
}