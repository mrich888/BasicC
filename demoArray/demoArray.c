#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 10
 /* 数组：
    1.一段连续的存储空间。
    2.它里面存放的数据类型是相同的。
    3.数组大小是 4 * BUFFER_SIZE.（一个下标占四个字节）
*/

int main()
{
    /* 方法一： 使用定义即初始化 */
    int array[BUFFER_SIZE] = {1, 2, 3};

    /* 清楚脏数据 */
    /* 地址 ：%p 取地址 */

    //memset(&array,0,sizeof(array));
    printf("=============\n");
    for( int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
    }

    /* 数组的地址和数组中首元素的地址是一样的 */
    // printf("%p\n",array);
    // printf("%p\n",&array[0]);

   
    return 0;
}