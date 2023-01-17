#include<stdio.h>
void isLeapYear(int n)
{
	if (n%4==0 && n%25!=0)
	printf("%d is a Leap Year!\n",n);
	else printf("%d is not a Leap Year!\n",n);
}
int main()
{
	int year;
	printf("Enter one year: ");
	scanf("%d",&year);
	isLeapYear(year);
	return 0;
}
