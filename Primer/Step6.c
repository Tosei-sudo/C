// Step6 http://wisdom.sakura.ne.jp/programming/c/c6.html

#include <stdio.h>

int main(void)
{
    int ans;
    int get_int;

    printf("値を入力してください\n");
    scanf("%d", &get_int);

    if (get_int == 10){
        printf("True\n");
    }else{
        printf("False\n");
    }
    printf("%s" , get_int == 10 ? "True" : "False");
    return 0;
}
