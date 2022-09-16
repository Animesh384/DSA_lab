#include<stdio.h>
#include<stdlib.h>
int search(int *arr,int n,int s)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            return i+1;
        }
    }
    return -1;
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
    printf("enter element to be searched:");
    int s;
    scanf("%d",&s);
    printf("%d",search(arr,n,s));
}