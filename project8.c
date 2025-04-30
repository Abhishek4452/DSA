#include<stdio.h>
#include <stdlib.h>
// doubly linked list creation
struct node {
    struct node * prev;
    int data;
    struct node * next;
};
struct node *creation(struct node *head){
    struct node *ptr = (struct node*)malloc (sizeof(struct node));
    struct  node *temp =head;
    int value;
    printf("enter the value for insertion : ");
    scanf("%d", &value);

    if(head == NULL){
        ptr ->prev = NULL;
        ptr ->data = value;
        ptr ->next = NULL;
        return ptr;
    }
    while(temp -> next!= NULL){
        temp = temp->next;
    }
    ptr->next =NULL;
    ptr->data = value;
    ptr->prev =temp;
    temp->next = ptr;
    return head;
}

void traverseforward(struct node *head){
    printf("traversing in forward manner\n");
    if(head == NULL){
        printf("empty doubly linked list ");
        return ;
    }
    struct node * ptr = head;
    while(ptr != NULL){
        printf("data : %d", ptr->data);
        printf("\n");
        ptr = ptr ->next;
    }
}
 void traversereverse(struct node *head){
    printf("traversing in revese manner \n");
    if(head == NULL){
    printf("empty doubly linked list");
    return;
    }
 struct node * ptr ;
 struct node *temp =head;
 while(temp->next != NULL){
    temp = temp->next;
 }
 // now ptr comes in last 
 ptr = temp;
 while(ptr != NULL){
    printf("data : %d \n", ptr -> data);
    ptr = ptr ->prev;
   
 }

 }


int main(){
    struct node *head =NULL;
    for (int i= 0; i<5; i++)
{    head = creation(head);
    
}
traverseforward(head);
traversereverse(head);
    return 0;
}
//output --
// enter the value for insertion : 10
// enter the value for insertion : 20
// enter the value for insertion : 30
// enter the value for insertion : 40
// enter the value for insertion : 50
// traversing in forward manner
// data : 10
// data : 20
// data : 30
// data : 40
// data : 50
// traversing in revese manner 
// data : 50 
// data : 40 
// data : 30 
// data : 20 
// data : 10 