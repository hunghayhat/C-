#include<stdio.h>
int main(){
	FILE *input, *output;
	intput = fopen ("tmp.c","r");
	output = fopen ("tmpCopy.c","w+");
	ch = fgetc(input);
	while (ch != EOF){
		fputc(ch,ouput);
		ch = fgetc(input);
	}
	fclose(input);
	fclose(output);
}
