#include<stdio.h>
#include<stdlib.h>
int nonzero(int **arr,int n)
{
    int a=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]!=0)
            {
                //printf("%d,",arr[i][j]);
                a++;
            }

        }
    }
    return a;
    
}
int sumAld(int **arr,int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
           sum=sum+arr[i][j];
        }
    }
    return sum;
}
void displayBld(int **arr,int n)
{
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            printf("%d,",arr[i][j]);
        }
    }

}
int prductofD(int **arr,int n)
{
    int pr=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j) pr=pr*arr[i][j];
        }
    }
    return pr;
}

int main()
{
    printf("enter length for array:");
    int n;
    scanf("%d",&n);
    int **arr=(int **)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
            *(arr+i)=(int *)malloc(n*sizeof(int));
    }
    int temp=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            //*(*(arr+i)+j)=(i+1)*(j+1);
            *(*(arr+i)+j)=temp++;

        }
    
    }
    printf("nonzero number:%d",nonzero(arr,n));
    printf("\n");
    printf("sum of the above diagonal:%d\n",sumAld(arr,n));
    printf("below diagonal :");
    displayBld(arr,n);
    printf("\n");
    printf("product of diagonal:%d",prductofD(arr,n));
    for(int i=0;i<n;i++)
    {
        free(*(arr+i));
    }
    free(arr);
}