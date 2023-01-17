#include<stdio.h>
int main(){
	int a[7];
	int i;
	for (i=0;i<7;i++){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
	printf("Dia chi 5 phan tu cua mang la:\n");
	for (i=0;i<5;i++){
		printf("%d\n",&a[i]);
	}
	return 0;
}
