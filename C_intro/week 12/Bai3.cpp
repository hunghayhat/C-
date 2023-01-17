#include<stdio.h>
void getSale (double *p, int size){
	int i;
	for (i=0; i<size; i++,p++){
	printf("Quy %d: ",i+1);
	scanf("%lf",p);
}
}
double totalSale (double *p, int size){
	int i;
	double total=0;
	for (i=0; i< size; i++,p++){
		total += *p;
	}
	return total;
}
int main(){
	double mang[4];
	printf("Nhap doanh thu moi quy:\n");
	getSale(mang,4);
	printf("Doanh so trong ca nam: ");
	printf("%.0lf",totalSale(mang,4));
	return 0;
}

