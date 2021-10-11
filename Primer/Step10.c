// Step10 http://wisdom.sakura.ne.jp/programming/c/c10.html

#include <stdio.h>

int main(void)
{
    int get_int;

    printf("数を入力してください\n");
    scanf("%d", &get_int);

    if (get_int < 1000)
        printf("入力された値は1000より低いです\n");
    else
    {
        if (get_int == 1000)
            printf("入力された値は1000です\n");
        else
        {
            printf("入力された値は1000より高いです\n");
        }
    }

    if (get_int < 1000)
        printf("入力された値は1000より低いです\n");
    else if (get_int == 1000)
        printf("入力された値は1000です\n");
    else
    {
        printf("入力された値は1000より高いです\n");
    }

    int count;
    count = 0;

    for (;;)
    {
        count++;
        printf("%d回目のくり返しです\n", count);
        if (count >= 10)
            break;
    }

    int var,var2;

    do
    {
        printf("値を入力してください\n");
        scanf("%d", &var);
        if ((var <= 0) || (var >= 10000))
        {
            printf("不正な値です\n");
            continue;
        }
        printf("入力を受け付けました\n");
        break;
    } while (1);

    do
    {
        printf("値を入力してください\n");
        scanf("%d", &var2);
        if ((var2 <= 0) || (var2 >= 10000))
        {
            printf("不正な値です\n");
            continue;
        }
        printf("入力を受け付けました\n");
        break;
    } while (1);
    
    return 0;
}
