#include<stdio.h>
#include<string.h>
void nhap_ten(char a[]){
	int i= strlen(a)-1,k;
		while (a[i]!=' ') i--;
			for (k=i+1; a[k]!='\0'; k++)
			printf("%c",a[k]); 
}
int main(){
	char a[100];
	printf("Nhap ten cua nguoi dung (VD: The Hung):\n");
	gets(a);
	fflush(stdin);
	int i=0, count=0;
	for (i=0; i < strlen(a); i++){
		if (a[i] ==' ')
		count++;
	}
	if (count != 1){
		printf("Dinh dang sai!\n");
		return 0;
	}
	else 
	nhap_ten(a);
	printf(" chinh la nguoi dep trai nhat Vinh Phuc!");
}
