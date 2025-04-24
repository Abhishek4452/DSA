#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isfull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    return 0;
}

int main()
{
    // struct stack
    //  s.size = 100;
    //  s.top = -1;
    //  s.arr = (int *)malloc(sizeof(int));
    // same as
    struct stack *s;
    s->size = 100;
    s->top = -1;
    s->arr = (int *)malloc(sizeof(int));
    // stack empty
s-> arr[0]= 7;
s-> arr[1] =8;
s-> arr[2]= 12;
s-> arr[3]= 13;
s-> arr[4]= 14;
s-> arr[5]= 18;
s-> top++;
    if (isEmpty(s))
    {
        printf("the stack is empty \n");
    }
    else
    {
        printf("not empty stack\n");
    }

    // stack full
    if (isfull(s))
    {
        printf("stack is full \n");
    }
    else
    {
        printf("stack is not full now \n");
    }
    return 0;
}