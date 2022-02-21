#include <stdio.h>
int main()
{
    int n;
    do
    {
        printf("Thoi gian may gia cong 1 thiet bi man hinh SamSung la: ");
        scanf("%d", &n);
    } while (n < 1 || n > 60);
    int m;
    do
    {
        printf("So thiet bi can gia cong: ");
        scanf("%d", &m);
    } while (m < 0);
    int time = m * n;
    printf("Tong thoi gian may gia cong cho m thiet bi la: %d", time);
    int chiphi = 0;
    if (time < 100)
    {
        chiphi = 800 * m;
    }
    else
    {
        chiphi = 900 * m;
    }
    printf("\nChi phi cho m thiet bi: %d", chiphi);
    return 0;
}