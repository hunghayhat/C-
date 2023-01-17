#include<stdio.h>
int kiemtra_doixung (int a[], int n){
	int i=0, j= n-1;
	while (i<=j){
		if (a[i]!=a[j])
		return 0;
		i++;
		j--;
	}
	return 1;
}
int main(){
	int i,n;	
	int a[100];
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&a[i]);
	}
	if (kiemtra_doixung(a,n) == 1)
	printf("Mang doi xung!\n");
	else 
	printf("Mang khong doi xung!\n");
	return 0;

}
