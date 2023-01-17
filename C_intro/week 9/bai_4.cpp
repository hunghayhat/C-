#include<stdio.h>
float tinh_luong(float n)
{	
	if (n>40)
	return 15*40+22.5*(n-40);
	else if (n<40)
	return 15*n;
}
int main()
{
	float n;
	printf("Nhap so gio lam viec: ");
	scanf("%f",&n);
	while (n>65 || n<10) 
	{
	if(n>65 || n<10){
	printf("Nhap sai, vui long thu lai!");
	continue;
}
	}
	if (n>=10 && n <=65)
	printf("Luong cua ban la:%.1f kVND",tinh_luong(n));
	
	return 0;
}
