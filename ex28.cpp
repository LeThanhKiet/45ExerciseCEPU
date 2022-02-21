#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int T = 3 * pow(n, 3) + 2 * pow(n, 2) + 1;
    printf("Bieu thuc co gia tri: %d", T);
    int sum = 0;
    for (int i = 2; i <= n; i += 2)
    {
        sum += i;
    }
    printf("\nTong so chan trong (1,%d) la: %d", n, sum);
    if (n < 2)
    {
        printf("\n%d khong phai la SNT!!!");
    }
    else
    {
        int count = 0;
        for (int i = 2; i < sqrt(n); i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            printf("\n%d khong phai la SNT!!!", n);
        }
        else
        {
            printf("\n%d la so SNT!!!", n);
        }
    }
    return 0;
}