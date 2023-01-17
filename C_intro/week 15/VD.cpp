#include<stdio.h>
int main(){
FILE *out;
out = fopen("hello.txt","a");
if (out == NULL){
	perror("Khong the mo tep de ghi.\n");
	return 1;
}
	fprintf(out, "Hello world");
	fclose(out);
	return 0;
}
