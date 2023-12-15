#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 10

/* 内存泄漏 ：3种场景 
    1.野指针
    2.malloc出的堆空间，没有及时被释放
    3.踩内存（read / write 不合法 ）

   * 使用valgrind查内存泄漏
*/

/* 状态码 */
typedef enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS, 

}STATUS_CODE;

int main()
{
    
    /* Q1. 什么情况下会导致内存泄漏 */
    //case 1: 野指针
#if 0
    int a;
    printf("a:%d\n", a);

    int array[BUFFER_SIZE];
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif
#if 0
    /* 野指针非常危险 */
    char *p; //p可能是地址：0xf4645765765
#endif

    // case2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        return ON_ERROR;
    }
    /* 使用 malloc 分配的空间，数据是脏的 （脏数据）*/
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);//不能直接ptr
 #if 0
    /* 极度危险的函数 ：超出了BUUFER_SIZE范围的字符也会输出。即强占了不属于它的空间地址
        之后改用 strncpy 函数
    */
    strcpy(ptr, "hello worldddddd");
#else
    /* 使用安全 */
    strncpy(ptr, "hello worldddddddd", BUFFER_SIZE - 1);
 #endif  
    printf("ptr:%c\n", *ptr);
    
     /* 释放内存 */
    if(ptr != NULL)
    {
        /* 释放内存 */
        free(ptr);
        ptr = NULL;
    }

    return 0;
}