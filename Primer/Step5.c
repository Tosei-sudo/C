// Step5 http://wisdom.sakura.ne.jp/programming/c/c5.html
#include <stdio.h>

int main(void)
{
    // int var = 10;
    // int ans;

    // ans = (var + 5) * 5;
    // printf("変数ans = %d", ans);

    // int ope1;
    // int ope2;

    // printf("与えられたふたつの数を加算します\n");
    // printf("最初の数を入力してください\n");
    // scanf("%d", &ope1);

    //     printf("%d に加算する数を入力してください\n", ope1);
    // scanf("%d", &ope2);

    // printf("答えは\t%d\tです", ope1 + ope2);

    char str;
    int get_int;

    printf("文字コードの仕組を調べます。1文字入力してください\n");
    scanf("%c", &str);

    printf("\n入力コード\t= %c\n", str);
    printf("コードの10進数\t= %d\n", str);
    printf("コードの16進数\t= %x\n", str);

    printf("\nコードに加算したい定数を半角英数で入力してください\n");
    scanf("%d", &get_int);

    printf("\n入力コード\t= %c\n", str + get_int);
    printf("コードの10進数\t= %d\n", str + get_int);
    printf("コードの16進数\t= %x\n", str + get_int);
    return 0;
}
