#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    int sum = 0;
    printf("Cac so lon hon 5 tu 1 den %d la:", n);
    for (int i = 6; i <= n; i++)
    {
        sum += i;
        printf("%d  ", i);
    }
    printf("\nTong cac so lon hon 5 tu 1 den %d la:%d", n, sum);
    sum = 0;
    int count = 0;
    for (int i = 6; i <= n; i += 2)
    {
        sum += i;
        count++;
    }
    printf("\nTrung binh cong cac so chan lon hon 5 tu 1 den %d la: %.3f", n, sum * 1.0 / count);
    return 0;
}