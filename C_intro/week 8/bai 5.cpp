#include<stdio.h>
int main()
{
	int i;
	int number_of_number;
	printf("Nhap so nguyen duong bat ki:\n");
	scanf("%d",&i);
	
	do 
	{
		printf("%d ",i-1);
		i -=1;	
	}
	while (i>1);
	return 0;
}
