#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    #if 0
    /* 数组的概念：
        1.一块连续的存储空间
        2.数组是存储相同的数据类类型
        int array[BUFFER_SIZE];  /* 整数数组 */
        char array[BUFFER_SIZE]; /* 字符数组 */
        char *array[BUFFER_SIZE];/* 字符串数组 */

    
    #endif

    /* 字符数组的内存在栈区 */
    char name[BUFFER_SIZE] = { 0 };
    memset(name, 0, sizeof(name));
    strncpy(name, "zhangsan", sizeof(name) - 1);//减一是因为要放个结束符
    printf("name:%s\n", name);

    printf("name[1]:%c\n",name[1]);
    name[1] = 'H';
    printf("name:%s\n", name);

    /* 指针数组不分家 */
    printf("*(name + 2):%c\n", *(name + 2));
    *(name + 2) = 'A';
    printf("*(name + 2):%c\n", *(name + 2));

    printf("name[2]:%c\n", name[2]);
    printf("*(name + 2):%c\n", *(name + 2));

    /* conclusion:
        1. 指针数组不分家。 
            name[X] = *(name + X)  X是常量
    */



#endif

#if 0
    /* 字符串 */
    char *ptr = "zhangsan";

    /* 指针数组不分家 */
    printf("ptr[1]:%c", ptr[1]);
    //ptr[1] = *(ptr + 1)
    printf("*()ptr + 2:%c\n", *(ptr + 2));

    ptr[0] = 'Z'; //不可以修改，因为字符串存在在全局常量区
    printf("ptr:%c\n", ptr[0]);

    /* conclusion：
        字符数组和字符串的区别：
        1. 内存：字符数组内存存放在栈区，存储的值可以被修改。
                字符串内存存放在全局区，不可以被修改。 
    */

#endif

#if 1
    /* 字符串数组 */
    char * array[BUFFER_SIZE] = { 0 };
    memset(array, 0, sizeof(array));
    array[0] = "hello";
    array[1] = "world"; 
    array[2] = "nihao";
    array[3] = "zhangsan";
    array[4] = "china";
    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %s\n", idx, array);
    }
    /* 字符串数组：
        1. 它是一个字符串
        2.存放的是字符串 
    */

   printf("array[][]:%c\n", array[0][0]);
   
#endif
}