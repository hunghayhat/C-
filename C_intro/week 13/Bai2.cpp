#include<stdio.h>
#include<string.h>
void swap (char a[], char b, char c){
	int i=0;
	while (a[i] != '\0'){
		if (a[i] == b){
			a[i] = c;
		}
			i++;
	}
}
int main(){
	char a[100];
	char b,c;
	printf("Nhap chuoi:\n");
	gets(a);
	fflush(stdin);
	printf("Nhap ki tu muon thay the trong chuoi: ");
	scanf("%c",&b);
	fflush(stdin);
	printf("Nhap ki tu ban muon chuyen thanh: ");
	scanf("%c",&c);
	fflush(stdin);
	swap (a,b,c);
	puts(a);
	return 0;
}
