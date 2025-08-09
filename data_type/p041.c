/* 生年月日の表示 */
#include <stdio.h>
#define MEIJI 'M'
#define TAISYOU 'T'
#define SYOUWA 'S'
#define HEISEI 'H'

int main() {
    char nengou = HEISEI;
    int seinen_gappi[] = {3, 11, 24};

    printf("birthday %c%d.%d.%d\n", nengou, seinen_gappi[0], seinen_gappi[1], seinen_gappi[2]);
}