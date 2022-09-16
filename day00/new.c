#include<stdio.h>

 int main ()
 {
 	int marks[5];
 	int i;
 	int lowestmarks;
 	for(i=1;i<5;i++)
 	{
 		
 		printf("enter the grade %d  ",i);
 		scanf("%d",&marks[i]);
 		
	 }
  lowestmarks= marks[0];
 
    for(i=1;i<5;i++)
    {
    	
    	if (marks[i] < lowestmarks)
    	   lowestmarks= marks[i];
    	   
	}
    
    printf("the lowest marks is %d",lowestmarks);
    return 0;
    
    
}