#include<stdio.h>
void countEven(int *p, int n){
	int i;
	for (i=0;i<n;i++, p++){
		if (*p%2!=0)
		printf("%d ",*p);
	}
}
int main(){
	int a[10];
	int *p = a;
	int i;
	for (i=0;i<10;i++){
		printf("Ptu thu %d: ",i+1);
		scanf("%d",&a[i]);	
	}
	printf("Cac phan tu le trong mang la: ");
	
	countEven(p,10);
}
