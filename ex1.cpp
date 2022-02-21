#include <stdio.h>
int main()
{
    float d_toan, d_ly, d_anh;
    do
    {
        printf("Nhap diem toan: ");
        scanf("%f", &d_toan);
    } while (d_toan < 0 || d_toan > 10);
    do
    {
        printf("Nhap diem ly: ");
        scanf("%f", &d_ly);
    } while (d_ly < 0 || d_ly > 10);
    do
    {
        printf("Nhap diem anh: ");
        scanf("%f", &d_anh);
    } while (d_anh < 0 || d_anh > 10);
    float tongdiem;
    tongdiem = d_toan + d_ly + d_anh;
    printf("Tong diem cua thi sinh la:%.3f", tongdiem);
    int k;
    do
    {
        printf("\nnhap vao khu vuc cua thi sinh: ");
        scanf("%d", &k);
    } while (k < 1 || k > 3);
    float kq;
    if (k == 1)
    {
        printf("Diem uu tien la 1");
        kq = tongdiem + 1;
    }
    else if (k == 2)
    {
        printf("Diem uu tien la 0.5");
        kq = tongdiem + 0.5;
    }
    else
    {
        kq = tongdiem;
    }
    printf("\nKet qua cua thi sinh la:%.3f", kq);
    return 0;
}