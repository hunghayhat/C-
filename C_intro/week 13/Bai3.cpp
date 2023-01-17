#include<stdio.h>
#include<string.h>
#include<ctype.h>
int nhap_ma(char a[8]){
	int i=0;
	while (a[i]!='\0'){
		for (i=0; i<3; i++)
		if (isalpha(a[i])==0){
			printf("Khong dung dinh dang!\n");
			return 0;
		}
		for(i=3; i<7; i++)
		if (isdigit(a[i])==0){
			printf("Khong dung dinh dang!\n");
			return 0;
		}
		printf("Ma dinh dang hop le!^^");
		return 0;
	}
}
int main(){
	char a[100];
	printf("Nhap ma khach hang: ");
	gets(a);
	fflush(stdin);
	if(strlen(a)!=7)
	printf("Khong dung dinh dang!\n");
	else
		nhap_ma(a);
	return 0;
}
