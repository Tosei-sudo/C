// Step15 http://wisdom.sakura.ne.jp/programming/c/c15.html

#include <stdio.h>

int main(void)
{
    int ary[3];

    for (int count = 0; count <= 2; count++)
    {
        ary[count] = 10 * (count + 1);
        printf("%d\n", ary[count]);
    }
    return 0;
}
