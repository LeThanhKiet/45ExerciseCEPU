#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap vao so ngay cong lam viec cua cong nhan: ");
        scanf("%d", &n);
    } while (n < 0 || n > 30);
    int luong = n * 400;
    printf("Luong cua cong nhan la:%d ", luong);
    int a;
    do
    {
        printf("\nSo gio lam them cua cong nhan la:");
        scanf("%d", &a);
    } while (a < 0);
    int tienlamthem;
    if (a > 50)
    {
        tienlamthem = a * 200;
        printf("Tien lam them la:%d ", tienlamthem);
    }
    else
    {
        tienlamthem = a * 250;
        printf("Tien lam them la:%d ", tienlamthem);
    }
    int tongtn = luong + tienlamthem;
    printf("\nTong thu nhap cua cong nhan la:%d", tongtn);
    return 0;
}