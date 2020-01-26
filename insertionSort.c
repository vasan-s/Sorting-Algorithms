/*
working principle:
start from 1st position and move the element to correct position

Algorithm:
1. start from 1st index,if any element is greater than current element,
 then shift that element to one position right, finally when condition fails means
 no lesser element than current element then place current at that position.
Time Complexity:
best case: O(n)
worst case: O(n2)
*/


#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int temp=0,i=0,j=0;
    for(i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i-1;
        while(j >= 0 && arr[j] > temp)
            {    
                arr[j+1] = arr[j];
                j--;
            }
        arr[j+1] = temp;
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
    insertionSort(arr,n);
    for(int i= 0; i < n; i++)
        printf("%d",arr[i]);
        
    return 0;
}
