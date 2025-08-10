/* ------------------------------
            成績
------------------------------ */
#include <stdio.h>

int main() {
    int bango[3] = {1001, 1002, 1003};
    int ten[3][4] = {
        {95, 83, 45, 56},
        {25, 36, 66, 48},
        {89, 80, 79, 90}
    };
    char seiseki[3] = {'B', 'C', 'A'};

    printf("NO. kokugo sansu rika syakai hyouka\n");
    printf("%d %d %d %d %d %c\n", bango[0], ten[0][0], ten[0][1], ten[0][2], ten[0][3], seiseki[0]);
    printf("%d %d %d %d %d %c\n", bango[1], ten[1][0], ten[1][1], ten[1][2], ten[1][3], seiseki[1]);
    printf("%d %d %d %d %d %c\n", bango[2], ten[2][0], ten[2][1], ten[2][2], ten[2][3], seiseki[2]);
}