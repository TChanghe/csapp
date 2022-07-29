#include <stdio.h>

void main()
{
    printf("使用'%%x'作为int输出:\n");
    printf("~0x7:%x\n", ~0x7);
    printf("0x%x\n",0x123456789abcdef & ~0x7);
    printf("使用'%%lx'作为long int输出:\n");
    printf("~0x7:%lx\n", ~0x7);
    printf("0x%lx\n",0x123456789abcdef & ~0x7);
}