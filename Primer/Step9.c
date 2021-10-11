// Step9 http://wisdom.sakura.ne.jp/programming/c/c9.html

#include <stdio.h>

int main(void)
{
    int count = 0;

    while (1)
    {
        printf("/");
        if (count == 25)
            printf("\n\t猫耳愛！\n");
        if (count == 51)
            break;
        count++;
    }
    count = 0;

    while (count <= 51)
    {
        printf("/");
        if (count == 25)
            printf("\n\t猫耳愛！\n");

        count++;
    }
    count = 0;
    do{
        printf("\n/");
        if (count == 25)
            printf("\n\t猫耳愛！\n");

        count++;
    } while (count == 0);
    printf("\nループを抜けました、プログラムを終了します");
    return 0;
}
