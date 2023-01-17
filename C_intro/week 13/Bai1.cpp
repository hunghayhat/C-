#include<stdio.h>
#include<string.h>
int dem_cach(char a[]){
	int i = 0;
	int count = 0;
	while (a[i] != '\0'){
		if (a[i]== ' ')
		count++;
		i++;
	}
	return count;
}
int main(){
	char a[100];
	printf("Nhap mot dong van ban bat ki:\n");
	gets(a);
	printf("So dau cach trong van ban vua roi la: %d",dem_cach(a));
	return 0;
}
