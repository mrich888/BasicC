#include <stdio.h>
#include <string.h>


#define BUFFER_SIZE     10
#define BUFFER_OFFSET   97


/* 函数 */

#if 0
    /* 函数参数 */
    /* 需求:实现两个数的交换 */
    /* 值传递 */
    void swapSurfaceData(int val1, int val2)
    {
        printf("before:val1:%d\tval2:%d\n", val1, val2);

        int tmpdata = val1;
        val1 = val2;
        val2 = tmpdata;

        printf("after:val1:%d\tval2:%d\n", val1, val2);
    }

    int  swapRealData(int *val1, int *val2)
    {
        int ret = 0;
        // printf("before:val1:%d\tval2:%d\n", val1, val2);
        int yellow = *val1;
        int red = *val2;
        /* 想方设法让*val2改成100 */
        printf("yellow:%d\n", yellow);
        printf("red:%d\n", red);

        int green = *val1;    // green = *(&num1)
        *val1 = *val2;          // *(&num1) = *(&num2)
        *val2 = green;        // *(&num2) = green

        // printf("after:val1:%d\tval2:%d\n", val1, val2);
        return ret;
    }
#endif


/* 数组做函数会自动弱化为指针 */
void printArray(int *array, int numSize)
{   
    // int elementNum = sizeof(array) / sizeof(array[0]);

    for (int idx = 0; idx < numSize; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
    return ;
}


int main()
{
    int num1 = 100;
    int num2 = 200;

#if 0
    int val1 = num1;        /* val1 = 100 */
    int val2 = num2;        /* val2 = 200 */

    val1 = 200;
    val2 = 666;
#endif

#if 0
    swapSurfaceData(num1, num2);
#else
#endif

#if 0
    int a = 5;
    int *p = &a;
    
    *p = 200;
    printf("a = %d\n", a);
#endif

#if 0
    swapRealData(&num1, &num2);
#endif  

    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elementNum = sizeof(array) / sizeof(array[0]);
    printf("len:%d\n", elementNum);

    for (int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET;
    }

    /*
     *  数组名就是数组的首地址，也是数组首元素的地址 
    */
#if 1
    printArray(array, elementNum);
#else
    for (int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
#endif
   
    printf("\n");
    return 0;
}