#include<stdio.h>
struct student
{
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;

    printf("enter a number student\n");
    scanf("%d",&n);

    struct student s[n];

    for(int i=0; i<n; i++)
    {
        printf("name rollno marks for student no(%d)",i+1,"\n");
        printf("\n");
        scanf("%s %d %d",&s[i].name,&s[i].roll,&s[i].marks);
    }

    for(int i=0; i<n; i++)
    {
        printf("%s %d %d\n",s[i].name,s[i].roll,s[i].marks);
    }
    return 0;
}