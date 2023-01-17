#include<stdio.h>
#include<string.h>

int strend (char *s, char *t){
	int result = 0;
	
	if (strlen(t) <= strlen(s)){
		s+= strlen(s) - strlen(t);
		if (strcmp(s,t)==0)
		result = 1;
	}
	return result;	
}
int main (void){
	char s1[100],s2[100],s3[100];
	gets(s1);
	fflush(stdin);
	gets(s2);
	fflush(stdin);
	gets(s3);
	fflush(stdin);
	if (strend(s1,s2))
		printf("The string (%s) has (%s) at the end.\n",s1,s2);
	else 
	printf("The string (%s) doesn't have (%s) at the end.\n",s1,s2);
	if (strend(s1,s3))
		printf("The string (%s) has (%s) at the end.\n",s1,s3);
	else 
		printf("The string (%s) doesn't have (%s) at the end.\n",s1,s3);
		
	return 0;
}
	
