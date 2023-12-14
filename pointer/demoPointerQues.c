#include <stdio.h>
#include <string.h>

int main()
{
    /* 指针和字符串 */
    char *ptr = "hello world";

    /* Q1: 打印字符串常量？什么叫字符串常量 */
    /* 1. 打印字符串的每一个字符： */
    /* way1: 使用for循环的方式 */
#if 0
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for(int idx = 0; idx < strlen(ptr); idx++) //这只能打印出hello
    {
        p = *ptr;
        printf("p:%c idx:%d\n", p, idx);
        ptr++;
        printf("strlen(ptr): %ld\n", strlen(ptr));
        
    }

#elif 0
    /* 实现方式1： */
    int len = strlen(ptr);
    printf("len:%d\n", len);
    char p = '0';
    for(int idx = 0; idx < len; idx++)
    {
        p = *ptr;
        printf("p:%c idx:%d\n", p, idx);
        ptr++;
    }
#else
    /* 实现方式2: */
    while (*ptr != '\0')
    {
        printf("ptr:%c\n", *ptr);
        ptr++;
    }
    


#endif

    return 0;
}