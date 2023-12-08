#include <stdio.h>

#define BUFFER_SIZE 10

int main()
{
#if 0
    /* 如何获取数组中元素的个数 = 数组的总长度 / 每个元素的长度*/
    char array[BUFFER_SIZE] = { 0 };
    int arrayLen = sizeof(array);
    printf("len:%d\n", arrayLen);
    
    int elementLen = sizeof(array[0]);
    printf("len:%d\n", elementLen);

    int length = arrayLen / elementLen;
    printf("length:%d", length);
#endif   
   
    // char pNum = 'a';
    // printf("pNum:%c\n", pNum);

    /* 只要是指针的变量定义，第一个需要是p开头。 */
    // char * ptr = "hello world";
    // printf("ptr:%s\n", ptr);

    /* 字符数组 */
    /* 字符数组初始化定义的两种方式 ：
            " " ：双引号（字符串）定义结尾默认加上\0 
            ' ' ：单引号 (字符) 定义结尾不加\0 
    */

    char buffer1[] = "hello word";  //结尾有个默认的\0
    char buffer2[] = {'h','e','l','l','o','w','o','r','l','d'};
    char buffer3[] = {'h','e','l','l','o','w','o','r','l','d'};
    int buflen1 = sizeof(buffer1); //字符数+1
    int buflen2 = sizeof(buffer2); //字符数

    printf("&buffer1:%p\n", buffer1); //
    printf("&buffer2:%p\n", buffer2);
    printf("&buffer3:%p\n", buffer3); //两个数组之间的地址也是连续的


    printf("buflen1:%d\nbuflen2:%d\n", buflen1,buflen2);
    printf("buflen1:%s\n", buffer1);
    printf("buflen2:%s\n", buffer2);
    printf("buflen3:%s\n", buffer3);



    return 0;
}