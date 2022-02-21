#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    printf("Day so tu 1 den %d: ", n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    printf("\nTong cac so chan trong khoang tu 1 den %d la:%d", n, sum);
    sum = 0;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 6 == 0)
        {
            sum += i;
            count++;
        }
    }
    printf("\nTrung binh cong cac chan chia het cho 3 tu 1 den %d la:%.3f", n, sum * 1.0 / count);
    return 0;
}