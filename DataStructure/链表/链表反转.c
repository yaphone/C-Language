#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
    int date;
    struct Node *next;
}Node, *List;

void printList(List L);



void reverseList(List head)
{
    Node *q = head->next;
    Node *r = q->next;
    while(r != NULL)
    {
        q->next = r->next;
        r->next = head->next;
        head->next = r;

        r = q->next;
        printList(head);
    }

}

void reverseList2(List head)
{
    Node *p, *q, *r;
    p = q = r = head->next;


    while(q->next != NULL)
        q = q->next;
//    printf("%d", q->date);
    while(q != p)
    {
        head->next = p->next;
        p->next = q->next;
        q->next = p;

        p = head->next;

        printList(head);
    }
}


/*************************建立链表***************************/

int creatList(List *L)
{
    *L = (Node *)malloc(sizeof(Node));
    Node *p = *L;
    for(int i=1; i<5; i++)
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
    while(p != NULL)
    {
        printf("%d ", p->date);
        p = p->next;
        if(p != NULL)
            printf("-> ");
    }
    printf("\n");

}

int main()
{
    List L;
    creatList(&L);
    printList(L);
//    reverseList(L);
    reverseList2(L);
//    printList(L);
}
