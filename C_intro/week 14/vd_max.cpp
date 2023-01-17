#include<stdio.h>
int main(){
	int i,max;
	int a[6];
	for (i=0;i<6;i++){
		scanf("%d",&a[i]);
	}
	max = a[0];
	for (i=1;i<6;i++){
		if (a[i]>max)
		max = a[i];
	}
	printf("%d",max);
}
