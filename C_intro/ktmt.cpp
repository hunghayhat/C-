#include<stdio.h>
#include<string.h>
int main()
{
	char hoten[20];
	printf("Nhap ho ten:\n");
	gets(hoten);
	printf("%s",hoten);
	int i,j=0;
	for(i=strlen(hoten)-1;hoten[i]='\0';i--){
		if (hoten[i] == ' ')
			break;
		}
	printf("%d",i);
}
