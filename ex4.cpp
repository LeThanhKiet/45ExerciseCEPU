#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Nhap so ngay cong cua cong nhan: ");
        scanf("%d", &n);
    } while (n < 0 || n > 31);
    int luong = n * 850;
    printf("Luong cua cong nhan la:%d", luong);
    int tienthuong;
    if (n <= 24)
    {
        tienthuong = 0;
        printf("\nTien thuong bang 0");
    }
    else
    {
        tienthuong = (n - 24) * 200;
        printf("\nTien thuong cua cong nhan la:%d", tienthuong);
    }
    int tongtn = luong + tienthuong;
    printf("\nTong thu nhap cua cong nhan la:%d", tongtn);
    return 0;
}