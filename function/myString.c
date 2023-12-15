#include "myString.h"

/* 获取字符串长度 */
int myStrlen(const char *pStr)
{
    int count = 0;//定义一个计数器
    /* 如果传null程序就出现非法地址，所以需要有个判断 */
    if(!pStr)
    {
        return count;
    }

    const char *temptr = pStr;
    while (*temptr != '\0')
    {
        count++;
        temptr++;
    }
    return count;
     
    
}

/* 字符串拷贝 */
int myStrcpy(char *dst, char *src)
{
    int ret = 0;
    if(src == NULL || dst == NULL)//一定要先判空，并且有返回值
    {
        return 0;
    }
    while (*src != '\0')
    {
        *dst = *src;
        dst++;
        src++;
    }
    *dst ='\0';
    return ret;
}

/* 字符串拼接 */
int myStrcat(char *dst, const char *src)
{
    int ret = 0;
    if(src == NULL || dst == NULL)
    {
        return 0;
    }

    while( *dst != '\0') //先找到第一个字符串结尾的部分
    {
        dst++;
    }
    while (*src != '\0')
    {
       *dst = *src;
       src++;
       dst++;
    }
    *dst = '\0';

    return ret;
    
}

/* 字符串比较 */
int myStrcmp(const char *str1, const char *str2)
{
    int ret = 0;
    if(str1 == NULL || str2 == NULL)
    {
        return 0;
    }

    int flag = 0;
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 == *str2)
        {
            ret = 1;
        }
        else
        {
            flag++;
        }
        str1++;
        str2++;
    }
    if(flag != 0)
    {
        ret = -1;
    }

    return ret;

}