#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Day so tu 1 den %d la:", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d  ", i);
    }
    printf("\nCac so chia het cho 7 trong khoang tu 1 den %d la:", n);
    for (int i = 1; i <= n; i++)
    {
        if (i % 7 == 0)
        {
            printf("%d  ", i);
        }
    }
    int sum = 0;
    int count = 0;
    if (n < 14)
    {
        printf("\nKhong co gia tri TBC cua cac so chan chia het cho 7");
    }
    else
    {
        for (int i = 14; i <= n; i += 14)
        {
            sum += i;
            count++;
        }
        printf("\nTBC cac so chan chia het cho 7 trong khoang tu 1 den %d la:%.3f", n, sum * 1.0 / count);
    }
    return 0;
}