#include<stdio.h>
int stack[6];
int top = -1;
void push(){// for pushing the element in the array
    if(top == 5){
     printf("stack is full\n");
    }
    else{
      int element ;
      printf("enter a element ");
      scanf("%d",&element);
      top++;
      stack[top]= element;
      printf("\n");
    }}

void pop(){// for push out the element from the array
    if(top == -1){
        printf("stack is empty ");
    }
    else{
        printf("%d \n", stack[top]);
        top--;
    }
}    
void display(){
    if (top == -1){
        printf("stack is empty there fore no element is shown here");
    }
    else{
        for(int i= 0 ; i<=top ; i++){
        printf("%d \n",stack[i]);
    }}
}
int main(){
    push();
    push();
    push();
    push();
    push();
    push();

    display();
    return 0;
}