#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "calculateFunc.h"
#include "myString.h"

/* 函数参数：可有可无 */
/* 函数返回值：可有可无 
   无 ： 需要写void
   有 ： 返回你想返回的数据类型 {int4 | long8 | short2 | char1 | float | double }
*/

/* 什么叫API:Application Program Interface 接口 */

/* 函数的定义 */
#if 0
//case1: 没有参数没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 0
//case2: 有参数，无返回值
// 函数的参数一定有数据类型
void myAddNum1(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
}
#endif

#if 0
//case3: 有参数，有返回值

int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n", sum);
    return sum;
}
#endif
#if 0
/* 枚举 也是一种数据类型，len为4 */
enum STATUS_CODE
{
    ON_SUCCESS,
    ON_ERROR,
    ON_NULLPTR,
    ON_MALLOCFAIL,
}; /* 取别名：①开头用typedef ，直接在结尾取别名 ②直接去定义 */
/* define */
typedef enum STATUS_CODE STATUS_CODE;
#endif

#define BUFFER_SIZE 20
int main()
{
#if 0
    /* 函数的调用 */
    purchaseAppointThing();

    int a = 5;
    int b = 6;
    myAddNum1(a, b);
    //int total1 = myAddNum1(a, b);
    //a value of type "void" cannot be used to initialize an entity of type "int

    int totalSum = myAddNum2(a, b);
    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        printf(" get a transformer");
    }
    else
    {
        printf("not get");
    }






    // char * ptr = "hello word";
    // myAddNum(a, ptr); 错误示范：函数返回的是int类型，ptr虽然打印的是地址（数字），但是char
#endif   
#if 0
    int num1 = 50;
    int num2 = 60;
    int sum = calculateAdd(num1,num2);
    printf("sum:%d\n", sum);

    int num3 = calculateSub(num1, num2);
    printf("sum:%d\n", num3);

    int amass = calculateMul(num1, num2);
    printf("sum:%d\n", amass);

    int num4 = calculateDiv(num1, num2);
    printf("sum:%d\n", num4);
#endif
#if 0
    /* 字符串长度 */
    char *pStr = "hello\0 world";//长度为5，是因为hello后面就有个\0，计数到\0的位置就会停止
    int len = 0;
#if 1
    len = myStrlen(pStr);
#else 
    len = strlen(pStr);
#endif
    printf("len:%d\n", len);
#endif
#if 0
    /* 字符串拷贝 */
    char str1[BUFFER_SIZE] = "hello";
    char str2[BUFFER_SIZE] = "HELLO";
    str1[BUFFER_SIZE] = myStrcpy(str1, str2);
    printf("str1:%s\n", str1);
#endif
#if 0
    /* 字符串拼接 */
    char str1[BUFFER_SIZE] = "hello";
    char str2[BUFFER_SIZE] = " world";
    str1[BUFFER_SIZE] = myStrcat(str1, str2);
    printf("str1:%s\n", str1);
#endif
#if 1
    /* 字符串拷贝 */
    char str1[BUFFER_SIZE] = "hello";
    char str2[BUFFER_SIZE] = "HELLO";
    int ret = myStrcmp(str1, str2);
    printf("str1:%d\n", ret);
#endif
    return 0;
}
