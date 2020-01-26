/*
working principle:
same as INSERTION SORT. Find  first minimum element and swap it with first place, then find second minimum 
replace it with second position 

Algorithm:
1. Get the minimum elemnt index and swap it with its respective positions.
*/


#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int temp=0,min=0,i=0,j=0;
    for(i = 0; i < n-1; i++)
    {
        min = i;
        for(j = i+1; j < n; j++)
        {
            if(arr[j] < arr[min])
                {    
                    min = j;
                }
        }
        if(min != i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
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
    selectionSort(arr,n);
    for(int i= 0; i < n; i++)
        printf("%d",arr[i]);
        
    return 0;
}
