#include<stdio.h>
int main()
{
	char x,y,z;
	printf("Enter 3 letters:\n");
	scanf ("%c %c %c",&x,&y,&z);
	printf("Thu tu sap xep cac chu cai vua nhap:\n");
	if (x>=y && y>=z)
	printf("%c %c %c",z,y,x);
	else if (x>=z && z>=y)
	printf("%c %c %c",y,z,x);
	else if (y>=z && z>=x)
	printf("%c %c %c",x,z,y);
	else	if (y>=x && x>=z)
	printf("%c %c %c",z,x,y);
	else if (z>=x && x>=y)
	printf("%c %c %c",y,x,z);
	else if (z>=y && y>=x)
	printf("%c %c %c",x,y,z);
	return 0;
}
