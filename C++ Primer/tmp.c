#include<stdio.h>

int fun(int &n)
{
    n = 0;
}

int main()
{
    int a = 10;
    fun(a);
    printf("%d\n", a);

}
