#ifndef __MYSTRING_H_
#define __MYSTRING_H_

#include <stdio.h>


/* 获取字符串长度 */
int myStrlen(const char *pStr);

/* 字符串拷贝 */
int myStrcpy(char *dst, char *src);

/* 字符串追加 */
int myStrcat(char *dst, const char *src);

/* 字符串比较 */
int myStrcmp(const char *str1, const char *str2);

#endif