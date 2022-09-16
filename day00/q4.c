//question 4
#include<stdio.h>
#include<stdlib.h>
struct emp{
    int empid;
    char name[10];
    char address[20];
    int age;
    float salary;
};
int main(){
    printf("enter a number employ:");
    int n;
    scanf("%d",&n);
    struct emp *emp=(struct emp*)malloc(n*sizeof(struct emp));
    printf("EMPID \tNAME \tADDRESH \tAGE \tSALARY\n");
    for (int i = 0; i<n; i++)
    {
        scanf("%d %s %s %d %f",&emp[i].empid,emp[i].name,emp[i].address,&emp[i].age,&emp[i].salary);

    }
    //selection short on empid
    struct emp temp;
    int min;
    for(int i=0;i<n-1;i++){
        temp=emp[i];
        min=i;
        for(int j=i+1;j<n;j++){
            if(temp.empid>emp[j].empid){
                temp=emp[j];
                min=j;
            }
        }
        emp[min]=emp[i];
        emp[i]=temp;
    }
    //display
    float avgs=0;
    printf("EMPID \tNAME \tADDRESH \tAGE \tSALARY\n");
    for(int i=0;i<n;i++){
       printf("%d\t%s\t%s\t %d\t %.2f\n",emp[i].empid,emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
       avgs=avgs+emp[i].salary;
    }
    printf("average:%.2f",avgs/n);
    
}