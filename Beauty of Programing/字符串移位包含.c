#include<stdio.h>
#include<string.h>
#define true 1
#define false 0
/*
给定两个字符串s1和s2，要求判定s2是否能够被s1做循环移位得到的字符串包含。
例如，给定s1=AABBCD和s2=CDAA,返回true;给定s1=ABCD和s2=ABCD，返回false;
*/


char src[] = "AABBCD";
char des[] = "CDAA";

int fun(char *src, char *des)
{
    int len = strlen(src);
    for(int i=0; i < len; i++)
    {
        char tmp = src[0];
        for(int j = 0; j < len; j++)
        {
            src[j] = src[j+1];
        }
        src[len - 1] = tmp;
    }
    if(strstr(src, des) == 0)
        return true;
    return false;
}

int main()
{
    int ans = fun(src, des);
    printf("%d ", ans);

}
