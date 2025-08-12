// 10^nを求める
#include <stdio.h>

int main()
{
    int kekka = 1;
    int n = 3;

    switch (n)
    {
    case 5:
        kekka *= 10;
    case 4:
        kekka *= 10;
    case 3: // ここから下をすべて実行する
        kekka *= 10;
    case 2:
        kekka *= 10;
    case 1:
        kekka *= 10;
    }
    printf("n = %3d kekka = %6d\n", n, kekka);
}