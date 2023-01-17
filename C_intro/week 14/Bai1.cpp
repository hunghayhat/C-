#include<stdio.h>
typedef struct date{
	int ngay;
	int thang;
	int nam;
}date_t;

date nhap(){
	date a;
	
	do {
		printf("Nhap thang (tu 1 den 12):");
		scanf("%d",&a.thang);
	} while ((a.thang<1) || (a.thang>12));
	
	do {
		printf("Nhap ngay (tu 1 den 31)");
		scanf("%d",&a.ngay);
	} while ((a.ngay < 1) || (a.ngay>31));
	
	do {
		printf("Nhap nam (tu 1 den 10000)");
		scanf("%d",&a.nam);
	
	} while ((a.nam < 1) || (a.nam>10000));
	return a;
}
int datecmp(date a, date b){

	if (a.nam> b.nam)
	return 1;
	else if (a.nam <b.nam)
	return -1;
	else {
		if (a.thang>b.thang)
		return 1;
		else if (a.thang < b.thang)
		return -1;
		else {
			if (a.ngay >b.ngay)
			return 1;
			else if (a.ngay < b.ngay)
			return -1;
			else return 0;
		}
	}
}
int main(){
	date a,b;
	printf("Nhap lan luot ngay, thang, nam (lan 1):\n");
	a = nhap(); 
	printf("Nhap lan luot ngay, thang, nam (lan 2):\n");
	b = nhap();
	if (datecmp(a,b) == -1)
	printf("%d/%d/%d < %d/%d/%d",a.ngay,a.thang,a.nam,b.ngay,b.thang,b.nam);
	else if (datecmp(a,b) == 0)
	printf("%d/%d/%d = %d/%d/%d",a.ngay,a.thang,a.nam,b.ngay,b.thang,b.nam);
	else
	printf("%d/%d/%d > %d/%d/%d",a.ngay,a.thang,a.nam,b.ngay,b.thang,b.nam);
	}
