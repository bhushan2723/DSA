// q2 insertion sort

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("\nEnter the size of the array :");
    scanf("%d",&n);
    
    int arr[n];
    printf("\nEnter the array elements \n ");
    for(int i=0 ; i < n ; i++)
    {
        scanf("%d",&arr[i]);
    }
  for(int i=1 ; i< n ; i++)
  {
     int temp = arr[i];
     j = i-1;
     while(j>=0 && arr[j]>temp)
     {
         arr[j+1] = arr[j];
         j--;
     }
     arr[j+1] = temp;
  }
  printf("sortet array :");
  for(int i=0 ; i < n ; i ++)
  {
      printf(" %d ",arr[i]);
  }
  //printf("\n");
    return 0;
}

/*
Enter the size of the array : 4

Enter the array elements
4 3 6 1
sortet array : 1  3  4  6 
*/
