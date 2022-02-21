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
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    printf("\nGia tri lon nhat trong mang la: %d", max);
    int sum = 0;
    int count = 0;
    for (int i = 1; i < n; i += 2)
    {
        sum += a[i];
        count++;
    }
    printf("\nTBC cac phan tu vi tri le trong mang: %.3f", sum * 1.0 / count);
    return 0;
}