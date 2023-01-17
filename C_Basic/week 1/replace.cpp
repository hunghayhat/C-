#include<stdio.h>
#include<string.h>
#define STRING_LENGTH 100
void replace (char str[], char replace_what, char replace_with){
	int i=0;
	for (i=0;str[i]!='\0';i++){
		if (str[i] == replace_what)
			str[i] = replace_with;
			
	}
	
}
int main(){
	char a,b;
	char string[STRING_LENGTH+1];
	printf("Nhap chuoi: ");
	gets(string);
	fflush(stdin);
	printf("Nhap ki tu muon thay doi: ");
	scanf("%c",&a);
	fflush(stdin);
	printf("Ki tu ma ban muon doi thanh?: ");
	scanf("%c",&b);
	fflush(stdin);
	replace(string, a, b);
	printf("The result: %s\n",string);
	return 0;
	
}
