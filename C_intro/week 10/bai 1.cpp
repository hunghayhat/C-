#include<stdio.h>
#include<math.h>
int main()
{
	int nguyen[3];
	int i,tong=0,min;
	for (i=0;i<3;i++)
	{
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&nguyen[i]);
	}
	for (i=0;i<3;i++)
	{
		if(abs(nguyen[i]%2)!=0)
		tong = tong + nguyen[i];
	}
	min = nguyen[0];
	for (i=0;i<3;i++)
	{
		
		if (nguyen[i]<= min)
		min = nguyen[i];
	}
	printf("Tong cua cac phan tu le trong mang la: %d\n",tong);
	printf("Phan tu nho nhat trong mang la: %d",min);
	return 0;
}
