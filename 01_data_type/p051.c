// 成績の表示
#include <stdio.h>

int main()
{
    int bango[3] = {10, 12, 13};
    char name[3][10] = {
        "aoyama",
        "takahashi",
        "ei"};
    int ten[3][4] = {
        {95, 83, 45, 56},
        {25, 0, 0, 48},
        {89, 80, 79, 90}};

    printf("  No. namae kokugo sansu rika syakai\n");
    printf("%5.4d %-9.8s%7.0d%7.0d%7.0d%7.0d\n", bango[0], name[0], ten[0][0], ten[0][1], ten[0][2], ten[0][3]);
    printf("%5.4d %-9.8s%7.0d%7.0d%7.0d%7.0d\n", bango[1], name[1], ten[1][0], ten[1][1], ten[1][2], ten[1][3]);
    printf("%5.4d %-9.8s%7.0d%7.0d%7.0d%7.0d\n", bango[2], name[2], ten[2][0], ten[2][1], ten[2][2], ten[2][3]);
}