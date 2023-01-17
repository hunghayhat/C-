#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	char s[100];
	printf("Nhap chuoi bat ky: ");
	fflush(stdin);
	gets(s);
	for (i=0; i<strlen(s); i++){
		if (s[i]==',' || s[i]=='.'|| s[i]==';' || s[i] == ':' || s[i]) == '!' || s[i] == '?')
		s[i] = ' ';
	}
	fflush(stdin);
	puts(s);
}
