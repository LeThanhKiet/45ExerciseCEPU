#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Day so le tu 1 den %d la: %d", n);
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d  ", i);
    }
    int sum = 0;
    for (int i = 3; i <= n; i += 3)
    {
        sum += i;
    }
    printf("\nTong cac so chia het cho 3 tu 1 den %d la: %d", n, sum);
    if (n < 10)
    {
        printf("\nKhong co TBC so chan chia het cho 5 tu 1 den %d", n);
    }
    else
    {
        sum = 0;
        int count = 0;
        for (int i = 10; i <= n; i += 10)
        {
            sum += i;
            count++;
        }
        printf("\nTBC so chan chia het cho 5 tu 1 den %d la: %.3f", n, sum * 1.0 / count);
    }

    return 0;
}
