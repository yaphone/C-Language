#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int date;
    struct Node *next;
}Node, *List;

List removeNthFromEnd(List head, int n) {
    int length = 0;
    List p = head;
    List q;
    while(p)
    {
        length += 1;
        p = p->next;
    }
    int m = length - n - 1;
    p = head;
    for(int i=0; i<m; i++) p = p->next;
    q = p->next;
    p->next = p->next->next;
    free(q);
    return head;

}

void creatList(List *L)
{
    *L = malloc(sizeof(Node));
    Node *p = *L;
    Node *q;
    for(int i=1; i<6; i++)
    {
        q = (Node *)malloc(sizeof(Node));
        q->date = i;
        p->next = q;
        p = q;
    }
    p->next = NULL;
}

int lengthList(List L)
{
    Node *p = L;
    int count = 0;
    while(p)
    {
        count += 1;
//        printf("***%d***", p->date);
        p = p->next;
    }
    return count;
}

struct Node* deleteList(List L, int n)
{
    Node *p = L;
    Node *q;
    for(int i=0; i<n-1; i++) p = p->next;
    q = p->next;
    p->next = p->next->next;
    free(q);
    return L;
}

void printList(List L)
{
    Node *p = L->next;
    while(p)
    {
        printf("%d   ", p->date);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    List L;
    creatList(&L);
    printList(L);
    List L2 = removeNthFromEnd(L, 2);
    printList(L2);

}
