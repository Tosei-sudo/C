// Step20 http://wisdom.sakura.ne.jp/programming/c/c20.html

#include <stdio.h>

int main(void)
{
    char str[3] = {'A', 'B', 127};
    int count;

    for (count = 0; count <= 2; count++)
    {
        printf("str[%d]のメモリアドレス = %x\n", count, &str[count]);
    }

    int *po, var;
    var = 10101;
    po = &var;

    printf("ポインタに格納されている内容 = %d\n", *po);
    printf("ポインタに格納されているアドレス = %x", po);

    var = 100;
    po = &var;

    *po = 1010;
    printf("変数varの値 = %d", var);
    return 0;
}
