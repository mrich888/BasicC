#include<stdio.h>
#include<string.h>

/* 常量 */
const int g_num = 10;

int main()
{
    char buffer1[] = "hello word"; //存放在栈区
    buffer1[0] = 'H';
    printf("buffer1:%s\n buffer[0]:%c\n", buffer1,buffer1[0]);
    
    /* 为什么字符串不能改呢？ 因为字符串是常量。它也是存放在全局区的。 */
    char * ptr = "hello word"; //存放在常量区
    //*(ptr + 0 ) = ptr[0]
    printf("ptr[0]:%c\n *(ptr + 1):%c\n", *(ptr + 0), *(ptr + 1));

    ptr[0] = 'H';
    printf("ptr[0]:%c\n", ptr[0]);

    // printf("ptr[0]:%c\n", ptr[0]);
    // printf("ptr[0]:%c\n", &ptr);

    return 0;
}