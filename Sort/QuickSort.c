#include<stdio.h>

int Partation(int a[], int low, int high)
{
    int key = a[low];
    while(low<high)
    {
        while(low<high && key<=a[high])
            high --;
        if(low<high)
        {
            a[low] = a[high];
            low++;
        }
        while(low<high && key>=a[low])
            low ++;
        if(low<high)
        {
            a[high] = a[low];
            high--;
        }

    }
    a[low] = key;
    return low;
}

void QuickSort(int a[], int low, int high)
{
    int mid;
    if(low<high)
    {
        mid = Partation(a, low, high);
        QuickSort(a, low, mid-1);
        QuickSort(a, mid+1, high);
    }

}

int main()
{
    int a[10] = {5, 4, 2, 3, 1, 8, 7, 9, 6, 10};
    QuickSort(a, 0, 9);
    for(int i=0; i<10; i++)
        printf("%d ", a[i]);
    printf("\n");

}




