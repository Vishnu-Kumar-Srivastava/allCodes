#include <stdio.h>
int main()
{
    int n;
    printf("enter the number of elements in the array \n");
    scanf("%d",&n);
    int arr1[n];
         printf("enter %d elements in the array \n" ,n);
    for(int i=0;i<n;i++){
   
        scanf("%d",&arr1[i]);

    }
    int min=0;
    int max=n-1;
    
    int mid=(min+max)/2;
    printf("the middle element of the array is : %d \n", arr1[mid]);
    int arr2[n];
    int j,i;
    for(i=mid+1, j=0;i<n;i++,j++)
    {
        arr2[j]=arr2[i];
    }
    for(i=mid, j=mid+1;i>=0;i--,j++)
    {
        arr2[j]=arr1[i];
    }
    printf("the new array is: \n");
    for(j=0;j<n;j++)
    {
        printf("%d ",arr2[j]);
    }





}