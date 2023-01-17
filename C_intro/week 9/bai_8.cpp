#include<stdio.h>
double findHighest(double a, double b, double c, double d, double e)
{
	double Highest;
	a = Highest;
	if(b >= Highest) b = Highest;
	if(c >= Highest) c = Highest;
	if(d >= Highest) d = Highest;
	if(e >= Highest) e = Highest; 
/*	if (a>=b && a>=c && a>=d && a>=e)
	return a;
	else if (b>=a && b>=c && b>=d && b>=e)
	return b;
	else if (c>=a && c>=b && c>=d && c>=e)
	return c;
	else if (d>=a && d>=b && d>=c && d>=e)
	return d;
	else if (e>=a && e>=b && e>=c && e>=d)
	return e;*/
}

double findLowest(double a, double b, double c, double d, double e)
{
	if (a<=b && a<=c && a<=d && a<=e)
	return a;
	else if (b<=a && b<=c && b<=d && b<=e)
	return b;
	else if (c<=a && c<=b && c<=d && c<=e)
	return c;
	else if (d<=a && d<=b && d<=c && d<=e)
	return d;
	else if (e<=a && e<=b && e<=c && e<=d)
	return e;
}

double calcScore(double a,double b,double c,double d,double e)
{
	return (a+b+c+d+e-findLowest(a,b,c,d,e)-findHighest(a,b,c,d,e))/3;
}
int main(){
	double a,b,c,d,e;
	printf("Nhap diem cua 5 giam khao:\n");
	scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e);
	printf("Diem trung binh thi sinh nhan duoc la: ");
	printf("%.1lf",calcScore(a,b,c,d,e));
	
	return 0;
}
