// Steo18 http://wisdom.sakura.ne.jp/programming/c/c18.html

#include <stdio.h>

int main(void)
{
    char str[17] = {'k', 'i', 't', 't', 'y', ' ', 'o', 'n', ' ', 'y', 'o', 'u', 'r', ' ', 'l', 'a', 'p'};
    int count;

    for (count = 0; count <= 16; count++)
        printf("%c", str[count]);

    char arr[17] = "ひざの上の同居人";

    printf("\n%s", arr);

    int count1 = 0;
    int count2 = 0;
    int ary[3][3] = {1, 5, 10, 50, 100, 500, 1000, 5000, 10000};

    while (1)
    {
        printf("ary[%d][%d] = %d\n", count1, count2, ary[count1][count2]);
        count2++;
        if (count2 == 3)
        {
            count1++;
            count2 = 0;
        }
        if (count1 == 3)
            break;
    }

    char strary[] = "kitty on your lap";

    printf("%s", strary);
    return 0;
}
