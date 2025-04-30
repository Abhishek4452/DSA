#include <stdio.h>
#include <stdlib.h>
// insertion and deletion in doubly linked list

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *creation(struct node *head)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    int value;
    printf("enter the value for insertion : ");
    scanf("%d", &value);

    if (head == NULL)
    {
        ptr->prev = NULL;
        ptr->data = value;
        ptr->next = NULL;
        return ptr;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    ptr->next = NULL;
    ptr->data = value;
    ptr->prev = temp;
    temp->next = ptr;
    return head;
}

void traverseforward(struct node *head)
{
    printf("traversing in forward manner\n");
    if (head == NULL)
    {
        printf("empty doubly linked list ");
        return;
    }
    struct node *ptr = head;
    while (ptr != NULL)
    {
        printf("data : %d", ptr->data);
        printf("\n");
        ptr = ptr->next;
    }
}
struct node *deletion(struct node *head)
{
    if (head == NULL)
    {
        printf("linked list overflow \n ");
        return head;
    }
    printf("enter the value for delete : ");
    int value;
    scanf("%d", &value);
    struct node *temp = head;

    while (temp->data != value)
    {
        temp = temp->next;
    }
    if(temp->prev == NULL){
        temp -> next -> prev = NULL;printf("data deleted from front \n");
        head = temp-> next;
    }else if(temp-> next == NULL){
       temp-> prev ->next = NULL;printf("data deleted from end \n");
    }
    else{
    (temp->prev)->next = temp->next;printf("data deleted in between \n");
    (temp->next)->prev = temp->prev;
  }
  temp->next = temp->prev = NULL;
    

    free(temp);
    return head;
}
int main()
{
    struct node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        head = creation(head);
    }
    traverseforward(head);

    head = deletion(head);
    traverseforward(head); head = deletion(head);
    traverseforward(head); head = deletion(head);
    traverseforward(head);
    return 0;
}