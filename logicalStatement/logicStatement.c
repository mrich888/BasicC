#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 状态码 */
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QUIT,
};

#define COUNT_NUM 100
#define RANGE_NUM 200

int main()
{
#if 0
    /* 判断语句 */
    int budget = 5000;
    
    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000;

    if(budget > applephone)
    {
        printf("get a apple!\n");
    }
    else if (budget > mi14Pro)
    {
        printf("get a mi14Pro!\n");
    }
    else
    {
        printf("get a huaweiP60!\n");
    } 


    int budget = 5000;
    int minbudget = 4000;
    int maxbudget = 5000;

    int applephone = 8999;
    int mi14Pro = 4399;
    int huaweiP60 = 6000;

    /* 或*/
    if(budget < applephone || budget > mi14Pro)
    {
        printf("i am happy\n");
    }
    else
    {
        printf("i am sad\n");
    }
    
    /* 0 && 1 结果为 0*/
    /* 且 &&：两边都成立（1）才成立（1）*/
    if((minbudget < budget) && (budget < maxbudget))
    {
        printf("success get a computer\n");
    }
    else
    {
        printf("error get a computer\n");
    }

#endif

#if 0
    /* switch */
    /* 坑1： 每一个case都要有break*/
    /* 坑2： 如果case里面的语句过多，一定需要加上中括号{}来包含所有语句 */
    /* 代码规范： 一个函数尽量不要超过80行，最多不要超过120行。 */
    int choice = 0;
    printf("请输入你的选项：");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case REGISTER:
        printf("welcome to register \n"); 
        break;  //没有break就不会跳出，输入1时则会输出break之前的所有选项
    case LOGIN:
        printf("welcome to login\n");
        break;
    case QUIT:
        printf("welcome to quit\n");
        break;
    default:
        printf("input choice invalid\n");
        break;
    }

#endif


    /* 循环 */
#if 0
    
    srand(time(NULL));
    //int randomNum = 0;

    /* for 循环 输出200以内的随机数字，用idx代替i*/
    /* int 定义在循环外，只需要开辟一次空间就可以；
       放在for循环里每次用到都需要开辟空间，相比来说浪费时间 */

    for (int idx = 0; idx < COUNT_NUM; idx++)
    {
        int randomNum = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n", randomNum);
    }
   
#endif

#if 0
    /* while 循环*/
    srand(time(NULL));
    int circleTimes = COUNT_NUM >> 5;
    int randomNUm = 0;

    while(circleTimes--)
    {
        randomNUm = rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNUm);
    }
#endif

#if 1
    /* do……while…… 用处：宏定义*/
    int varaNUm = 0;
    do
    {
        printf("varaNum:%d\n", varaNUm);
    } while (varaNUm);
    


#endif    




    return 0;
}