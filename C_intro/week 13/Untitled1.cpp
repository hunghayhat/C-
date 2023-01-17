#include<stdio.h>
#include<string.h>
int main(){
	char s[5][100]= {"TV127  31 inch Television", "CD057  CD Player", "TA877  Answering Machine", "CS409  Car Stereo", "PC655  Personal Computer"};
	char find[100];
	printf("Nhap tu khoa ban muon tim kiem: ");
	fflush(stdin);
	gets(find);
	char *p=NULL;
	int i;
	for (i=0; i<5; i++){
		p = strstr(s[i],find);
		if (p != NULL)
		break;
	}
	if (p == NULL)
	printf("Cannot find!");
	else
		printf("%s",s[i]);
	
}

