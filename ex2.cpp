#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c;
    do
    {
        printf("Nhap vao a,b,c ");
        scanf("%d%d%d", &a, &b, &c);
    } while (a + b < c || b + c < a || a + c < b || a < 0 || b < 0 || c < 0);
    int CV = a + b + c;
    printf("Chu vi cua tam giac la:%d ", CV);
    float p = (a + b + c) / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("\nDien tich cua tam giac la:%.3f", area);
    return 0;
}