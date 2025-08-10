// 符号の付け替えを行う
#include <stdio.h>

int main()
{
    int a = 35;

    printf("     a = %3d %#4.4x\n", a, a);
    printf("-1 * a = %3d %#4.4x\n", ~a + 1, ~a + 1);
}