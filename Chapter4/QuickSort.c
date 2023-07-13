#include<stdio.h>
void swap(int *xp, int *yp)
{
  int temp = *xp;
  *xp = *yp;
  *yp = temp;
}
int partition(int arr[],int low,int high)
{
    int PivotIndex=high;
    int i=low;
    for(int j=low;j<=high;j++)
    {
        if(arr[j]<arr[PivotIndex])
        {
            swap(&arr[i],&arr[j]);
            i++;
        }
    }
    swap(&arr[i],&arr[PivotIndex]);
    return i;
}
void quickSort (int arr[],int low,int high)
{
    if(high-low>1)
    {
        int PivotIndex=partition(arr,low,high);
        quickSort(arr,low,PivotIndex-1);
        quickSort(arr,PivotIndex+1,high);
    }
}
void sort(int arr,int size)
{
    quickSort(arr,0,size-1);
}
