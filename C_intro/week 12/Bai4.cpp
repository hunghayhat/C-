#include<stdio.h>
void khaibao_mang (int *p, int size){
	int i;
	for (i=0; i< size; i++,p++){
		printf("Ptu thu %d: ",i+1);
		scanf("%d",p);
	}
}
void mang_con(int *p, int size){
	int i, j = size, k=0;
	for (k=0; k<size; k++){
	printf("\n");
	for (j=size; j>0; j--){
		for (i=k; i<j; i++){
			printf("%d ",*(p+i));
			
		}
	}
	
	}
}
int main(){
	int size;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&size);
	int mang[size];
	khaibao_mang (mang,size);
	mang_con(mang,size);
	return 0;
}
