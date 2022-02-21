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
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    printf("\nTong cac gia tri trong mang la: %.3f", sum);
    float x;
    printf("\nNhap x: ");
    scanf("%f", &x);
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            flag = 1;
            a[i] = 0;
        }
        else
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        printf("\n%.3f khong co trong mang!!!", x);
    }
    else
    {
        printf("\n%.3f co trong mang!!!");
        printf("\nThay the %.3f ==> 0");
        for (int i = 0; i < n; i++)
        {
            printf("%.3f  ", a[i]);
        }
    }
    return 0;
}