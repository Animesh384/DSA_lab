/question 4
#include<stdio.h>
#include<stdlib.h>
struct emp{
    int empid;
    char name[10];
    char address[20];
    int age;
    float salary;
}emp[5];
int main(){
    printf("EMPID \tNAME \tADDRESH AGE \tSALARY\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d %s %s %d %f",&emp[i].empid,emp[i].name,emp[i].address,&emp[i].age,&emp[i].salary);

    }
    //selection short on empid
    struct emp temp;
    int min;
    for(int i=0;i<5-1;i++){
        temp=emp[i];
        min=i;
        for(int j=i+1;j<5;j++){
            if(temp.empid>emp[j].empid){
                temp=emp[j];
                min=j;
            }
        }
        emp[min]=emp[i];
        emp[i]=temp;
    }
    //display
    printf("EMPID \tNAME \tADDRESH AGE \tSALARY");
    for(int i=0;i<5-1;i++){
       printf("%d\t %s\t %s\t %d\t %f\n",emp[i].empid,emp[i].name,emp[i].address,emp[i].age,emp[i].salary);
    }
    
}