#include <stdio.h>
#include <stdlib.h>
// normal linked list
struct node
{
    int data;
    struct node *next;
};
void traverse(struct node *ptr){
    while(ptr != NULL){
        printf("element : %d \n", ptr-> data );
        ptr = ptr->next; // move to next node
    }
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    // memory allocation in heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    // link first node with the second node
    head->data = 7;
    head->next = second;
    // link second node with the third node
    second->data = 11;
    second->next = third;
    // link third node with the null
    third->data = 18;
    third->next = NULL; // null always writtenin capital letter
    traverse(head);
    return 0;
}