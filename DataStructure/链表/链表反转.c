#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int date;
    struct Node *next;
}Node, *List;


void reverseList(List head)
{
//    for(Node *p = head->next; p->next->next->next != NULL; p++)
//    {
        Node *p = head;
        Node *q = p->next;
        Node *r = q->next;

        q->next = r->next;
        p->next = r;
        r->next = q;


 //   }

}


/*************************建立链表***************************/

int creatList(List *L)
{
    *L = (Node *)malloc(sizeof(Node));
    Node *p = *L;
    for(int i=0; i<5; i++)
    {
        Node *q = (Node *)malloc(sizeof(Node));
        q->date = i;
        p->next = q;
        p = q;

    }
    p->next = NULL;
}

/*************************打印链表***************************/

void printList(List L)
{
    Node *p = L->next;
    while(p)
    {
        printf("%d ", p->date);
        p = p->next;
    }
    printf("\n");

}

int main()
{
    List L;
    creatList(&L);
    printList(L);
    reverseList(L);
    printList(L);
}
