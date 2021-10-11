// Step19 http://wisdom.sakura.ne.jp/programming/c/c19.html

#include <stdio.h>

int main(void)
{
    char name[3][5] = {"Rena", "Yuki", "Mimi"};

    printf("%s\n%s\n%s", name[0], name[1], name[2]);

    char cast[][2][64] = {
        {"レイ(南斗)", "塩沢兼人"},
        {"レイ(エヴァ)", "林原めぐみ"}};

    printf("キャスト\n%s\t%s\n", cast[0][0], cast[0][1]);
    printf("%s\t%s", cast[1][0], cast[1][1]);
    return 0;
}
