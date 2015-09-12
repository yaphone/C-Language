#include<stdio.h>
int main()
{
    int a[10] = {5, 4, 2, 3, 1, 8, 7, 9, 6, 10};
    int tmp=0;
    int i, j;
    int increment=10;
    do
    {
        increment = increment/3 + 1;
        printf("%d\n", increment);
        for(i=increment; i<10; i++)
        {
            if(a[i]<a[i-increment])
            {
                tmp = a[i];
                for(j=i-increment; j>=0&&tmp<a[j]; j-=increment)
                    a[j+increment] = a[j];
                a[j+increment] = tmp;
            for(int k=0; k<10; k++)
                printf("%d ", a[k]);
            printf("\n");
            }

        }
        printf("\n");
    }while(increment>1);
    for(i=0; i<10; i++)
        printf("%d ", a[i]);

}
