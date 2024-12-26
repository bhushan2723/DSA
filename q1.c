// q1 bubble sort 

#include<stdio.h>
int bubblesort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n-i-1;j++)
     {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
      }
    }
}

int displayarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    printf("\nEnter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("\nEnter the array elements \n ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Original array\n");
    displayarray(arr,n);

    bubblesort(arr,n);

    printf("sortet array\n");
    displayarray(arr,n);

return 0;
}
/*

Enter the size of array : 4

Enter the array elements 
 1 3 2 4
Original array
 1  3  2  4 
sortet array
 1  2  3  4 

*/

