#include <stdio.h>

int main()
{
    int kokugo = 85;
    int eigo = 92;
    int suugaku = 56;
    int total;
    char hoshi;

    total = kokugo + eigo + suugaku;
    hoshi = (kokugo >= 60) ? '*' : ' ';
    printf("kokugo  %3d %1c\n", kokugo, hoshi);
    hoshi = (eigo >= 60) ? '*' : ' ';
    printf("eigo    %3d %1c\n", eigo, hoshi);
    hoshi = (suugaku >= 60) ? '*' : ' ';
    printf("suugaku %3d %1c\n", suugaku, hoshi);
    hoshi = ((kokugo >= 60 && eigo >= 60 && suugaku >= 60) || total > 200) ? '*' : ' ';
    printf("total   %3d %1c\n", total, hoshi);
}