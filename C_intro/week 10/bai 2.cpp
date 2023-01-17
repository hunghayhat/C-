#include<stdio.h>
int main(){
	int mang[5];
	int i,tong=0;
	for (i=0;i<5;i++)
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&mang[i]);
	}
	for (i=1;i<4;i++)
		{
			if(mang[i]>mang[i+1] && mang[i]>mang[i-1])
			tong += mang[i];
		}
	printf("Tong cac cuc tri dia phuong trong mang la %d",tong);
	return 0;

}
