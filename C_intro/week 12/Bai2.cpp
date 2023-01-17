#include<stdio.h>
double *maximum(double *a, int size){
	double *max, *p;
	if (size == 0) return NULL;
	max = a;
	
	for (p=a+1; p < size+a; p++){
		if (*p > *max)
		max = p;
	
	}
	return max;
}
int main(){
	int size;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	double a[size],*p;
	
	int i;
	for (i=0;i<size;i++){
		printf("Ptu thu %d: ",i+1);
		scanf("%lf",&a[i]);
	}
	p = maximum(a, size);
	if (p == NULL)
		printf("Khong ton tai mang\n");
	else	
		printf("%.0lf", *maximum(a, size));
	return 0;
}
