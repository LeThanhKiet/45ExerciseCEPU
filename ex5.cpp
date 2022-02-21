#include <stdio.h>
int main()
{
    int t;
    do
    {
        printf("Thoi gian may gia cong 1 man hinh SamSung la: ");
        scanf("%d", &t);
    } while (t < 1 || t > 30);
    int m;
    do
    {
        printf("Nhap vao so thiet bi can gia cong: ");
        scanf("%d", &m);
    } while (m < 0);
    int time = m * t;
    printf("Thoi gian may gia cong cho m thiet bi:%d ", time);
    int chiphi = m * 500;
    printf("\nTong chi phi gia cong cho %d thiet bi la:%d", m, chiphi);
    return 0;
}