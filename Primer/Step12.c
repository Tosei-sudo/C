// Step12 http://wisdom.sakura.ne.jp/programming/c/c12.html

#include <stdio.h>

int main(void)
{
    short var1 = 32767;
    long var2 = 32768;
    unsigned short var3 = 40000;
    unsigned long var4 = 4294967295;
    long double var5 = 123456.789;

    printf("%hd\n", var1);
    printf("%ld\n", var2);
    printf("%u\n", var3);
    printf("%lu\n", var4);
    printf("%Ld", var5);
    return 0;
}
