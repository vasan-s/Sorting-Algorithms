/*
working principle:

Find maximum element in the array and move it to the end of array. So the number of passes needed
is N-1, because for example: to sort 5 elements upto 4 pass upto 4th maximum elements will be in 
correct position.

Algorithm:

1. Loop through n-1 elements, and sub loop to n-1-i elements.
(n-i-1) because at end of first pass max element wil be at end of array. so we need not to compare 
with last element. (save time)
2. check a flag with swap function. because there may be a possibility element will be sorted before 
reaching end of max pass.

*/

#include <stdio.h>

void bubbleSort(int arr[], int n)
{
    int temp=0, flag=0;
    for(int i = 0; i < n-1; i++)
    {
        flag = 0;
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                flag = 1;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        if(flag== 0)
            break;
    }
    return;
}

int main()
{
    int n=0;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    bubbleSort(arr,n);
    for(int i= 0; i < n; i++)
        printf("%d",arr[i]);
        
    return 0;
}
