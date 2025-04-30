#include <stdio.h>
void binarySearch()
{   // binary search program
    // array data is arranged in accending order
    int arr[6] = {12, 24, 36, 48, 60, 72};
    int flag = 0;
    int SE;
    int low = 0;
    int high = 5;
    int mid;
    printf("enter the number which you wanna search ");
    scanf("%d", &SE);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == SE)
        {
            flag = 1;
            break;
        }
        if (SE < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (flag == 1)
    {
        printf("element is found ");
    }
    else
    {
        printf("element is not found");
    }
}

int main()
{
    binarySearch();
    return 0;
}
