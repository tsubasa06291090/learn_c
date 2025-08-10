// 特定のビットのセット・リセット・反転
#include <stdio.h>

int main()
{
    unsigned int a = 0x0f4d;

    printf("a          = %4.4x\n", a);
    printf("a & 0xfff0 = %4.4x\n", a & 0xfff0); // リセット
    printf("a | 0xf000 = %4.4x\n", a | 0xf000); // セット
    printf("a ^ 0x000f = %4.4x\n", a ^ 0x000f); // 反転
}