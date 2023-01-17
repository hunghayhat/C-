#include<stdio.h>
float dongnang(float m, float v)
{
	float w;
	w = 0.5*m*v*v;
	return w;
}
int main()
{
	float m,v;
	printf("Nhap khoi luong va van toc cua vat:\n");
	scanf("%f%f",&m,&v);
	printf("Dong nang cua vat la %.2f",dongnang(m,v));
	return 0;
}
