#include<stdio.h>
int main(){
	int dem = 0;
	char s[80];
	FILE *f = fopen("vanban.txt","r");
	if (f == NULL){
		perror("Loi mo tep vanban.txt\n");
		return 1;
	}
	while (!feof(f))
	dem += fscanf(f,("%s"),s);
	fclose(f);
	printf("Tong so tu: %d",dem);
	return 0;
}
