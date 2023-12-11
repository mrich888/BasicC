#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 32

int main()
{
#if 0
    /* 数组的初始化*/
    /* 字符数组 */
    char array[BUFFER_SIZE];
    /* 数组初始化 */
    memset(array, 0, sizeof(array));
    int len = sizeof(array);

    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        array[idx] = rand();
        
    }

#endif

#if 0
    /* 字符数组 */
    char array[BUFFER_SIZE] = "hello world";
    int len = sizeof(array);
    printf("len:%d, array:s\n",len, array);
#endif

#if 0
    /* 字符串 */
    char array1[BUFFER_SIZE] = "hello world";
    /* 第一个strlen */
    int len = strlen(array1);
    printf("len:%d\n", len);

    /* 第二个 strcpy */
    char name[BUFFER_SIZE];
    memset(name, 0, sizeof(name));
    strcpy(name, "zhangsan");
    printf("name:%s\n", name);


    /* 第三个 strcat ：在\0的地方开始写附加的字符 */
    strcat(name, " is a boy");
    printf("name:%s\n", name);

    /* 第四个 strcmp :比较的是ascll码值 */
    char name2[BUFFER_SIZE] = "wangwu";
    int ret = strcmp(name2, name); //前面和后面相比
    printf("ret:%d\n", ret);
#endif    


#if 0
    /* 字符串: 在全局(常量)区 */
    /* 指针 ：每个指针占八个字节*/
    /* 字符串的表示 (char *) */
    char * ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n", len);
    printf("size:%d\n", size);

    printf("*ptr:%c\t*(ptr+1):%c\t,ptr:%s\n)", *ptr, *(ptr + 1), ptr);

    *ptr = 'H';
    printf("*ptr:%c\t*(ptr+1):%c\t,ptr:%s\n)", *ptr, *(ptr + 1), ptr);
    


#endif




    return 0;
}