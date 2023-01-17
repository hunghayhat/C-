#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	gets(s);
	fflush(stdin);
	printf("%c",s[strlen(s)-1]);
}
