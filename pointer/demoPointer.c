#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 32
/* 指针 ： 指向xx地址里面的内容，也就是取xx地址里面的内容（读写都可以）*/
int main()
{
#if 0
    //  1.指针怎么定义
    //  基础数据类型
    //  建议（Tips）：定义变量（任意类型）记得初始化 
    int a = 0;
    long b = 0;
    
    /* 指针的定义 */
    int *p = NULL;
#endif
#if 0
    /* 指针的使用：指针内存存放的是某变量的地址 */

    /* *p = &a :  （取值）拿出来的是a的值。用指针描述就是指针指向a地址里面的内容 */
    /*  p = &a :（取地址）p里面存放的是a的地址 */
    /* *p = *(&a) :      用等量代换的形式去解释指针：因为p里存放的是a的地址，所以两边同时加*就是取a里面的内容的意思。
        *p = a ：（抵消） *p指向的就是a的内容，所以*p就是a的值，即 *& 可以相互抵消
    */ 
    int a = 5;
    int *p = &a;

    printf("a:%d\n", a);// a 的值
    printf("*p = %d\n", *p);// 指针指向a地址里的内容，也就是a的值（去读地址里面的内容）
    printf("*(&a):%d\n", *(&a));//a的值

    printf("&a:%p\n", &a);// a 的地址
    printf("p = %p\n", p);//因为*p是指针：p存放的是地址 ,故输出格式为地址

    printf("&p:%p\n", &p);//p本身的地址，与p中存放的a的地址不一样

    int **ptr = &p;//已知p是一个指针
    printf("ptr:%p\n", ptr);//存放的是p的地址
    printf("*ptr:%p\n", *ptr);//取p里面的内容，也就是a的地址
    printf("*(*ptr): %d\n", *(*ptr));//a
#endif
#if 0
    /* 指针的特性1：指针占用内存大小是8个字节（64位操作系统）/ 32位里面指针是4个字节 */
    int a = 10; 
    int len = sizeof(a);// 4
    printf("len:%d\n", len);

    char p = 65; 
    len = sizeof(p);// 1
    printf("len:%d\n", len);

    /* 指针占用内存大小为8 */
    char *ptr = &p; 
    len = sizeof(ptr);//8
    printf("len:%d\n%c\t%d\n", len, *ptr, *ptr);

    int *ptrInt = &a;
    printf(" *(&a):%d\n", *(&a));
    printf("*ptrInt:%d\n", *ptrInt);

    len = sizeof(ptrInt); //再次确定指针占用内存大小为8
    printf("len:%d\n", len);
#endif

#if 1
    /* 指针特性2 ：指针和字符串 */
    /* 字符串是区别字符数组的 */

    char * ptr1 = "hello world";//字符串是用指针定义的
    int len1 = sizeof(ptr1);//所以ptr的长度是指针的长度，为8
    printf("len:%d\n", len1);

    /* Q1：怎么获取字符串的长度 : 用strlen（strcat/strcpy/strcmp） */
    int len2 = strlen(ptr1);
    printf("len2:%d\n", len2);

    /* Q2: 字符数组赋值 */
    char name[BUFFER_SIZE] = { 0 };
    strcpy(name, "zhangsan"); //这里不能用赋值（=）
    int len3 = strlen(name);
    printf("name:%s\nlen3:%d\n", name, len3);

    /* Q3:我要给字符串赋值*/
    char *ptr2 = NULL;

    ptr2 = "zhangsan";//使用copy会出现段错误，是因为出现再非法空间里
    printf("&(zhangsan):%p\n", &("zhangsan"));
    printf("ptr2:%p\n", ptr2);

    int len4 = strlen(ptr2);
    printf("ptr2:%s\nlen4:%d\n", ptr2, len4);
#endif
#if 0
    /* 堆空间 */
    /* void *是一个指针，这个指针被称为万能指针 */
    /* man: void * malloc() */
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);

#endif
    return 0; 
}