#include<stdio.h>
#include<stdlib.h>
void nextgreatest(int *arr,int n)
{
    int temp;
    for (int  i = 0; i <n; i++)
    {
        temp=-1;
        for(int j=0;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                temp=arr[j];
                break;
            }
        }
        printf("%d \t %d\n",arr[i],temp);
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
        scanf("%d",(arr+i));
    }
    nextgreatest(arr,n);
    free(arr);
}






