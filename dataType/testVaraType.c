#include <stdio.h>
#include<time.h>
#include<stdlib.h>

/*数据类型*/

int main()
{
#if 0
    int age = 6;
    int len = sizeof(age);  /*整形就是整数*/
    printf("len: %d, age = %d\n", len,age); /*%d就是打印整数*/
    printf("hello word!\n");

    long bigValue = 0;
    len =sizeof(long);
    printf("len: %d, bigValue = %ld\n", len, bigValue);

    short smallValue = 1;
    len =sizeof(smallValue);
    printf("len: %d,bigValue = %d\n", len, smallValue);

#if 1
    /*浮点数*/
    float weight = 50.5;
    len = sizeof(weight);
    printf("len %d, weight = %f", len , weight);

#else

    /*double*/
    double weight = 50.5;
    len = sizeof(weight);
    printf("len: %d, weight = %f\n", len , weight);

#endif


    /*有符号*/
    char sex = -1;
    int len = sizeof(sex);
    printf("len: %d, sex = %c sex = %d\n", len , sex, sex); /*%c打印字符*/


    char default_value = 128;
    len = sizeof(default_value);
    printf("len: %d, sex = %c sex = %d\n", len , default_value, default_value);

    /*无符号 和 有符号的区别*/
    unsigned char m_value = -1;
    len = sizeof(m_value);
    printf("len: %d, sex = %c sex = %d\n", len , m_value, m_value);
#endif
#if 0
    /* 括号的优先级最高 */
    /* 表达式 & 运算符 */
    /* 运算符 + - *   */
    int val = 3 + 5;
    printf("val:%d\n", val);

    val++;
    printf("val:%d\n", val);
    val--;
    printf("val:%d\n", val);


    ++val;
    printf("val:%d\n", val);
    --val;
    printf("val:%d\n", val);

    val = val + 100;
    printf("val:%d\n", val);
#endif

#if 0
    val += 100;
    printf("val:%d\n", val);

    int m_value = 10;
    int discuss = m_value / 3;
    int remainder = m_value % 3;

    printf("diacuss:%d\n", discuss);
    printf("remainder:%d\n", remainder);

    int randomVal = rand();
    printf("randomVal:%d\n", randomVal);

    /* 中奖率是%25 */
    int lotteryRate = randomVal % 4;
    printf("lotterRate:%d\n", lotteryRate);



    int a = 5 << 2;

    printf("a:%d\n", a);


   int val = 7;
   int orVal = val | 2;
   int andVal = val & 2; 

   printf("orVal:%d\n", orVal);
   printf("andVal:%d\n", andVal);

   int notVal = !val;
   printf("notVal:%d\n", notVal);

    return 0;
#endif
    /* 且 或 非 */

    int condition1 = 1;
    int condition2 = 6;

    /* 或：一个满足就返回1 */
    // if((condition1 == 1) || (condition2 == 5))
    // {
    //     printf("hello word\n");
    // }
    // else
    // {
    //     printf("net hello word\n");
    // }

    /* 且：两个或多个都满足，就返回1，否则返回0 */

    if((condition1 == 1) && (condition2 == 5))
    {
        printf("hello word\n");
    }
    else
    {
        printf("net hello word\n");
    }

}

