#include<stdio.h>
int addNumbers (int *fiveNumber){
	int i, sum=0;
	for (i=0; i<5; i++,fiveNumber++){
		sum += *fiveNumber;
	}
	return sum;
	
}
int main(){
int a[5]={1,2,3,4,5};
int *p = a;
printf("%d",addNumbers(p));
}
