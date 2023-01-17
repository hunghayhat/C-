#include<stdio.h>
daonguoc_mang (int a[], int n){
	int i = 0, j = n-1, k;
	while (i <= j){
		k = a[i];
		a[i]=a[j];
		a[j]=k;
		i++;
		j--;
	}
	
}
int main(){
	int a[100];
	int i=0;
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	while (i<n){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	printf("Mang duoc in ra theo thu tu la: ");
	i=0;
	while (i<n){
	printf("%d ",a[i]);
	i++;
	}
	printf("\n");
	daonguoc_mang(a, n);
	printf("Mang duoc in ra theo thu tu dao nguoc la: ");
	i=0;
	while (i<n){
	printf("%d ",a[i]);
	i++;
	}
	return 0;

}
