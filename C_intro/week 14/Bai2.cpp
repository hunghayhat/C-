#include<stdio.h>
typedef struct thoitiet{
	int mua;
	int t_max;
	int t_min;
	int t_tb;
}thoitiet_t;
thoitiet_t hamnhap(){
	thoitiet a;
	printf("Nhap tong luong mua:");
	scanf("%d",&a.mua);
	do {
	printf("Nhiet do cao nhat:");
	scanf("%d",&a.t_max);
	} while (a.t_max>50 || a.t_max <-40);
	
	do {
	printf("Nhiet do thap nhat:");
	scanf("%d",&a.t_min);
	}	while (a.t_min>50 || a.t_min <-40);
	
	do{
	printf("Nhiet do trung binh:");
	scanf("%d",&a.t_tb);
	} while (a.t_tb>50 || a.t_tb <-40);
	return a;
}
int main(){
	thoitiet thang[12];
	int i,tongmua=0,max;
	float mua_tb;
	for (i=0; i<12; i++)
	{
		printf("Nhap cac so lieu cua thang %d:\n",i+1);
		thang[i] = hamnhap();
		tongmua += thang[i].mua;
	}
	printf("Tong luong mua trong nam la: %d\n",tongmua);
	printf("Luong mua trung binh trong nam la: %f\n",(float)tongmua/12);
	 max = thang[0].t_max;
	for (i=1; i<12; i++){
		if (thang[i].t_max > max)
		max = thang[i].t_max;
	}
	printf("Nhiet do cao nhat trong nam la: %d",max);
	printf("%d",thang[1].t_max);
}
