#include <stdio.h>
#include<stdlib.h>
// circular linked list insertion and traversal

struct node{
    int data;
    struct node *next;
};
struct node *ClinklistInsertion(struct node *head){
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *temp =head;
    int value;
    printf("enter the value in CIRCULAR heap:");
    scanf("%d",&value);
    if(head == NULL){
        ptr-> data =value;
        ptr ->next = ptr;
        return ptr;
    }
    while(temp->next != head ){
     temp = temp ->next;
    }
   
    temp->next= ptr;
    ptr->data = value ;
    ptr -> next = head;
    return head;
}
void *traversal(struct node *head){
    if(head == NULL){
        printf("heap is empty");
        return ;
    }
    struct node *ptr ;
    ptr = head;
    printf("data in a heap will be as follows  - \n");
     do {// if we will use while loop the last node is some how miss durning the traversing
        printf("data in a heap : %d ",ptr->data);
        printf("\n");
        ptr =ptr->next;

     }while(ptr != head);
}

int main(){
    struct node *head = NULL;
    // head -> data = 20;
    // head -> next = head;
    head = ClinklistInsertion(head); head = ClinklistInsertion(head); head = ClinklistInsertion(head);
    head = ClinklistInsertion(head); head = ClinklistInsertion(head); head = ClinklistInsertion(head);
    head = ClinklistInsertion(head);
    traversal(head);

    return 0;
}
// output 
// enter the value in CIRCULAR heap:10
// enter the value in CIRCULAR heap:20
// enter the value in CIRCULAR heap:30
// enter the value in CIRCULAR heap:40
// enter the value in CIRCULAR heap:50
// enter the value in CIRCULAR heap:60
// enter the value in CIRCULAR heap:70
// data in a heap will be as follows  - 
// data in a heap : 10 
// data in a heap : 20 
// data in a heap : 30 
// data in a heap : 40 
// data in a heap : 50 
// data in a heap : 60 
// data in a heap : 70 