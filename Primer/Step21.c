// Step21 http://wisdom.sakura.ne.jp/programming/c/c21.html

#include <stdio.h>

int main(void)
{
    // int ary[2] = {1000, 2000};
    // int *po;

    // po = &ary[0];
    // printf("po\t = %x\n", po);
    // po++;
    // printf("po++\t = %x\n", po);
    // printf("*po++\t = %d", *po);

    int ary[2] = {1000, 2000};
    int *po;

    po = &ary[0];
    printf("%d", *(po++));

    return 0;
}
