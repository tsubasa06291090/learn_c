// 家族について
#include <stdio.h>

int main()
{
    char name[4][10] = {
        "sigeyuki",
        "kahoru",
        "sayaka",
        "kenta"};
    int age[4] = {36, 35, 7, 4};
    double length[4] = {180.5, 157.3, 135.5, 122.4};

    printf("My family\n name age length\n");
    printf("%-10s %3d %7.1f\n", name[0], age[0], length[0]);
    printf("%-10s %3d %7.1f\n", name[1], age[1], length[1]);
    printf("%-10s %3d %7.1f\n", name[2], age[2], length[2]);
    printf("%-10s %3d %7.1f\n", name[3], age[3], length[3]);
}