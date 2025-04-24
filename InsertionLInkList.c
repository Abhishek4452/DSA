#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf(" data in a heap : %d", ptr->data);
        printf("\n");
        ptr = ptr->next; // pointer will be updated;
    }
}

// insert at head
struct node *headinsertion(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));

    ptr->data = value;
    ptr->next = head;
    return ptr; // here pointer is head or head is pointer
    // therefore either we can return ptr or head
}
struct node *midinsert(struct node *head, int value, int i)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *nw = (struct node *)malloc(sizeof(struct node));

    ptr = head;
    if(i == 1){
        head = headinsertion(head,value);
        return head;
    }

    while (i - 1 > 1)
    {
        ptr = ptr->next;
        i--;
    }
    nw->next = ptr->next;
    nw->data = value;
    ptr->next = nw;
    return head;
}

// insert at the end
struct node *lastinsertion(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
   
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr->data = value;
    ptr->next = NULL;
    temp->next = ptr;
    return head;
}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    // at head initially
    head->data = 35;
    head->next = second;
    // second
    second->data = 34;
    second->next = third;
    // third
    third->data = 67;
    third->next = NULL;

    traversal(head);
    printf("enter data : ");
    int rand; // value which we want to insert in heap
    scanf("%d", &rand);
    head = headinsertion(head, rand); // element added in top of heap
    traversal(head);

    printf("enter data : ");
    int Lelement; // value which we want to insert in heap
    scanf("%d", &Lelement);
    head = lastinsertion(head, Lelement);
    traversal(head);

    printf("enter the value in btw : ");
    int mid, i;
    scanf("%d", &mid);
    printf("enter index : ");
    scanf("%d", &i);
    head = midinsert(head, mid, i);
    traversal(head);

    printf("enter the value in btw : ");
    scanf("%d", &mid);
    printf("enter index : ");
    scanf("%d", &i);
    head = midinsert(head, mid, i);
    traversal(head);
    return 0;
}