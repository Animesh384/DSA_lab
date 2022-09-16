#include<stdio.h>
#include<stdlib.h>
void even_odd(int *arr,int n)
{
    int temp,count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            temp=arr[i];
            arr[i]=arr[count];
            arr[count]=temp;
            count++;
        }
    }  
}
int main()
{
     printf("enter length for array:");
    int n;
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    even_odd(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }

}