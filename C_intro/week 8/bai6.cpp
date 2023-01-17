#include<stdio.h>
int main()
{
	int so_mon;
	int tin_chi;
	float diem,tong;
	float tb;
	int dem = 0,sum_tin=0;
	printf("Nhap so mon hoc cua ban:\n");
	scanf("%d",&so_mon);
	while (dem < so_mon)
	{
		printf("Nhap diem cua mon thu %d:",dem+1);
		scanf("%f",&diem);
		printf("Nhap so tin chi:");
		scanf("%d",&tin_chi);
		sum_tin += tin_chi;
		tong += tin_chi*diem;
		dem +=1;
	}
	tb = tong / sum_tin;
	printf("Diem trung binh cua ban la: %f\n",tb);
	return 0;
	
}
