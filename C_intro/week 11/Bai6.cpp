#include<stdio.h>
void incomeplus (int *p, int year){
	if(year>3)
	*p+=300000;
}
int main(){
	int luong,year;
	printf("Nhap luong hien tai cua nhan vien:");
	scanf("%d",&luong);
	printf("Nhap so nam lam viec: ");
	scanf("%d",&year);
	incomeplus(&luong,year);
	printf("Luong sau khi cap nhat la: %d",luong);
}
