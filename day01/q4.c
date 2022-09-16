//quetion 4
#include<stdio.h>
#include<stdlib.h>
void findrange(int *arr,int n,int a,int b)
{   
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=a&&arr[i]<=b)
        {
            printf("%d,",arr[i]);
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
        scanf("%d",arr+i);
    }
    printf("enter a b:");
    int a,b;
    scanf("%d %d",&a,&b);
    findrange(arr,n,a,b);
}