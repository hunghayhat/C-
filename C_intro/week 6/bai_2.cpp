#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:\n");
	scanf("%d",&age);
	if(age<=0 && age >=150 )
	printf("Error.Please try again!\n");
	else if (age >0 && age <18)
	printf("You are a child.\n");
	else if (18<= age && age <65)
	printf("You are an adult.");
	else	if (age >=65) 
	printf("You are an old.");
	return 0;	
}
