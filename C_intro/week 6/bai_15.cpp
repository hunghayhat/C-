#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,x1,x2,delta;
	printf("Enter a,b,c of equation ax^2+bx+c=0\n");
	scanf ("%f %f %f",&a,&b,&c);
	delta = (b*b-4*a*c);
	x1= (-b+sqrt(delta))/2/a;
	x2= (-b-sqrt(delta))/2/a;
	if (delta<0)
	printf("Equation has no test.\n");
	if (delta>=0)
	printf("Equation has 2 tests %.2f and %.2f\n",x1,x2);
	return 0;
}
