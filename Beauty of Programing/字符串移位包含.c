#include<stdio.h>
#include<string.h>
#define true 1
#define false 0
/*
���������ַ���s1��s2��Ҫ���ж�s2�Ƿ��ܹ���s1��ѭ����λ�õ����ַ���������
���磬����s1=AABBCD��s2=CDAA,����true;����s1=ABCD��s2=ABCD������false;
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
