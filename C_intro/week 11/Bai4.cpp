#include<stdio.h>
void swap(int *p, int *q, int *r){
	int tmp;
	tmp = *p;
	*p = *q;
	*q = *r;
	*r = tmp;
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	swap(&a,&b,&c);
	printf("%d\n%d\n%d",a,b,c);
	
}
