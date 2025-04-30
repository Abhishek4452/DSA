#include <stdio.h>
#include <stdlib.h>
//  deletion from particular node
// deletion in linked list

int n=1;
struct node
{
    int data;
    struct node *next;
};
struct node *insertionAtEnd(struct node *head, int value)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = head;
    while (temp->next != NULL)
    {
         temp= temp->next;
    }
    ptr->data = value;
    ptr->next = NULL;
    temp->next = ptr;
    n++;
    return head;
   
}

void traversal(struct node *head)
{
    while (head != NULL)
    {
        printf("data : %d", head->data);
        printf("\n");
        head = head->next;
    }
}
struct node* headdeletion(struct node*head){
    struct node *temp= (struct node*)malloc(sizeof(struct node));
    temp= head;
    head =head-> next;
    free(temp);
    return head;
}

struct node* enddeletion(struct node *head,int pr){
    struct node *ptr = (struct node* )malloc(sizeof(struct node));
    struct node *temp= head;
    int i=1;
   while(pr-1 != i){
    temp= temp->next;
     i++;
   }
ptr = head;
temp = temp->next;
ptr->next = NULL;
free(temp);
n--;
    return head;
}

struct node* btwdeletion(struct node* head, int pos){
    struct node * ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp = head;
    int i=1;
    while(pos-1 != i){
        temp = temp ->next;
        i++;
    }
    ptr= temp;
    temp = temp->next;
    ptr->next =temp->next;
    printf("\n deleted element is :%d \n", temp->data);
    free(temp);
    return head;

}

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    // entering the data in head
    head->data = 11;
    head->next = NULL;
   // printf("first traversal \n");
   // traversal(head);
   // printf("2nd traversal \n");
    head = insertionAtEnd(head, 75);
   // traversal(head);
   // printf("3rd traversal \n");
    head = insertionAtEnd(head, 510);
    traversal(head);
    printf("number of node : %d",n);
    printf("\n");
    


    // head = deletion(head,1);
    // printf("\n element deleted from head \n");
    // traversal(head);

// head = headdeletion(head);
// printf("element left in heap \n");
// traversal(head);

// head = enddeletion(head, n);
// printf("last element deletion \n");
// traversal(head);


head =btwdeletion(head,2);
traversal(head);
  
    return 0;
}