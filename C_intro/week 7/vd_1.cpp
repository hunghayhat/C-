#include<stdio.h>
#define PERIOD '.'
int main()
{
	char c;
	while ((c = getchar())!= PERIOD)
	putchar(c);
	printf("good bye.\n");
	return 0; 
}
