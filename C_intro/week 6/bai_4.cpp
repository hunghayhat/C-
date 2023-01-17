#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{	
	int num,real_num;
		real_num = rand();

	printf("Enter the number you guest:\n");
	scanf("%d",&num);
	if (num<real_num)
	printf("Too small. The correct number is %d",real_num);
	else if (num > real_num)
	printf("Too big. The correct number is %d",real_num);
	else if (num == real_num)
	printf("Bingo. Congratulations!");
	return 0;
	
}
