#include<stdio.h>
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
int select(int arr[], int i,int n)
{
    int index=i;
    for(;i<n;i++)
    {
        if(arr[i]<arr[index])
        {
            index=i;
        }
    }
    return index;
}


void selectionSort(int arr[], int n)
{
	int min=0;
    for(int j=0;j<n;j++)
    {
        min=select(arr,j,n);
	    swap(&arr[min],&arr[j]);
    }
    
}