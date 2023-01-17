#include<stdio.h>
int main()
{
	char car_type;
	float t1,t2,time,total;
	
	printf("Enter your car type:\n");
	car_type = getchar();
	switch (car_type){
	case 'C':
		t1 = 0.7;
		t2 = 2.5;
		break;
	case 'B':
		t1= 1.5;
		t2= 2;
		break;
	case 'T':
		t1= 2.5;
		t2= 3.25;
		break;
	default: printf("Please try again!\n"); break;
}
	printf("Enter your time:\n");
	scanf("%f",&time);
	if (time<=2)
	total = time * t1;
	else if (time>2)
	total = 2 * t1 + (time-2)*t2;
	printf("You have to pay %.2f$",total);
	return 0;
}
