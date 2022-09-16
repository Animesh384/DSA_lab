//question 1
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("etner a length of array:");
    scanf("%d",&n);
    //declear a dynamicarray
    int *array=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++){
        printf("enter a value(%d):",i+1);
        scanf("%d",(array+i));
    }
    //finding second largest and smallest number
    int fl,sl,fs,ss;
    fl=sl=-555555;
    fs=ss=__INT_MAX__;
    for(int i=0;i<n;i++){
        if(*(array+i)>fl){
            fl=*(array+i);
        }
         if(*(array+i)<fs){
            fs=*(array+i);
        }
    }
    for (int i=0; i <n; i++)
    {
        if(*(array+i)>sl&&*(array+i)!=fl){
            sl=*(array+i);
        }
        if(*(array+i)<ss&&*(array+i)!=fs){
            ss=*(array+i);
        }
    }
    
    printf("second largest:%d",sl);
    printf(" second smallest:%d",ss);
}