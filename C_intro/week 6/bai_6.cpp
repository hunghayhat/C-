#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num, realnum;
	realnum = rand() %10;
	printf("Enter the number you guest:\n");
	scanf("%d",&num);
	switch (num){
	case 1: printf("Bingo! Congratulations.") ;
	default: printf("Wrong! The correct number is %d",realnum);
	}
	return 0;
}
