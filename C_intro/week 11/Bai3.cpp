#include<stdio.h>
int main(){
	printf("Nhap 3 so thuc:\n");
	float a,c,b;
	scanf("%f%f%f",&a,&b,&c);
	float *ptr;
	ptr = &a;
	*ptr += 100;
	ptr = &b;
	*ptr += 100;
	ptr = &c;
	*ptr += 100;
	printf ("%f\t%f\t%f",a,b,c);
	
}
