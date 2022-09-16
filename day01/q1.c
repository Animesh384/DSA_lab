#include<stdio.h>
#include<stdlib.h>
void reverse(int *arr,int n)
{
    int temp=n-1;
    int temp2;
    for(int i=0;i<=n/2;i++)
    {
        temp2=arr[i];
        arr[i]=arr[temp];
        //arr[n-i-1]
        arr[temp]=temp2;
        temp--;
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
        arr[i]=i+1;
    }
    reverse(arr,n);
    
    for(int i=0;i<n;i++)
    {
        printf("%d,",arr[i]);
    }
}