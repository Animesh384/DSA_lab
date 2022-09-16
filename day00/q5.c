//question 5
#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    char adr[10];
    int rollno,*sub;
};
void display(struct student* s,int n){
    int total;
    for(int i=0;i<n;i++){
        total=0;
        printf("name:%s rollno:%d",s[i].name,s[i].rollno);
        for(int j=0;j<2;j++){
            total=total+*((s+i)->sub+j);
        }
        printf(" total:%d\n",total);
    }
}
int main(){
    printf("enter a number of student:");
    int n;
    scanf("%d",&n);
    struct student* s=(struct student*)malloc(n*sizeof(struct student));
    for(int i=0;i<n;i++){
        printf("name rollno address\n");
        scanf("%s %d %s",s[i].name,&s[i].rollno,s[i].adr);
        s[i].sub=(int*)malloc(2*sizeof(int));
        for(int j=0;j<2;j++){
            printf("sub%d:",j+1);
            scanf("%d",((s+i)->sub)+j);
        }
    }
    display(s,n);
}