#include<stdio.h>
struct employee
{
    int emp_id;
    char name[10];
    char add[20];
    int age;
    int salary;
};

int main()
{
    int n;
    char c, c1;

    printf("emter number of employ\n");
    scanf("%d",&n);

    struct employee e[n];

    for(int i=0; i<n; i++)
    {
        printf("empid \tname \taddress \tage \tsalary %d",i+1,"\n");
        printf("\n");
        scanf("%d %s %s %d %d",&e[i].emp_id,&e[i].name,&e[i].add,&e[i].age, &e[i].salary);
    }
    //printf("the char %d ", (char)(98));
    for(int i=65; i<=90; i++)
    {
        for(int j=0; j<n; j++)
        {
            c = i;
            c1 = i+32;
            //printf("%c",e[j].name[0]);
            if (e[j].name[0] == c || e[j].name[0] == c1)
            {
                //printf("i am here %d",e[i].emp_id);
                printf("%d %s %s %d %d\n",e[j].emp_id,e[j].name,e[j].add,e[j].age, e[j].salary);
            }
        }
    }

    return 0;
}