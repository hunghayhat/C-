#include<stdio.h>
void swap_1(int a[], int size){
	int i=0, j= size, tmp;
	for (i=0; i<j; i++,j--){
		tmp = a[i];
		a[i] = a[j-1];
		a[j-1] = tmp;
	}
}
void swap_2 (int *p, int size){
	int i = 0, j = size-1, tmp;
	while (i<j){
		tmp = *(p+i);
		*(p+i) = *(p+j);
		*(p+j) = tmp;
		i++; j--; 	
	}
	
}
int main(){
	int size,i;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	int a[size];
	for (i=0; i< size; i++){
		printf("Ptu thu %d: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Mang ban vua nhap la: \n");
	for (i=0; i<size; i++)
	printf("%d ",a[i]);
	printf("\n");
	swap_2(a,size);
	printf("Mang sau khi dao vi tri la:\n");
	for (i=0; i < size; i++)
	printf("%d ",a[i]);
	return 0;
	
}
