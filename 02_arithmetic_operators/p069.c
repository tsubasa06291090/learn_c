// 型のサイズを求める
#include <stdio.h>

int main()
{
    int n;
    long int ln;

    printf("int = %d byte(s)\n", sizeof(n));
    printf("long int = %d byte(s)\n", sizeof(ln));
    printf("double = %d byte(s)\n", sizeof(double));
}