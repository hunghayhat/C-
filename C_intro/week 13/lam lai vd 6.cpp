#include<stdio.h>
#include<string.h>
int strend(char *s, char *t){
	int re = 0;
	if (strlen(t)<=strlen(s)){
		s += strlen(s) - strlen(t);
		if (strcmp(s,t)==0)
		re =1;
	}
	return re;
}
int main(){
	char s1[100];
	char s2[100];
	gets(s1);
	fflush(stdin);
	gets(s2);
	fflush(stdin);
	printf ("%d",strend(s1,s2));
	return 0;
}
