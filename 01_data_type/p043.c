/* 名前の表示 */
#include <stdio.h>

int main() {
    char my_name[] = {"tanaka"};
    char your_name[2][10] = {
        "yamamoto",
        "suzuki"
    };

    printf("namae1 %s\n", your_name[0]);
    printf("namae2 %s\n", your_name[1]);
    printf("namae3 %s\n", my_name);

    int nenrei = 20;
    char form1[] = "My name is YAMAMOTO TARO.\n";
    char form2[] = "nenrei %dsai\n";

    printf(form1);
    printf(form2, nenrei);
}