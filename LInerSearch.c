#include <stdio.h>
void search()
{
    int SE; // searching element;
    int arr[6] = {12, 23, 45, 67, 90, 110};
    int flag = 0;
    printf("enter the number which you wants to search from the list \n ");
    scanf("%d", &SE);
    for (int i = 0; i <= 5; i++)
    {
        if (arr[i] == SE)
        {
            flag = 1;
            break;
        }
    }
    if (flag = 1)
    {
        printf("element is in the list \n");
    }
    else
    {
        printf("element not in the list \n");
    }
}
int main()
{
    search();
    return 0;
}