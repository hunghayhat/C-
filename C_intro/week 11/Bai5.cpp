#include<stdio.h>
void swap(int a, int b, int c){
	int tmp;
	tmp =a;
	a = b;
	b=c;
	c=tmp;
}
void swap_2(int *a, int *b, int *c){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = *c;
	*c = tmp;
}
int main(){
	int x,y,z;
	int *p,*q,*r;
	printf("Nhap x,y,z:\n");
	scanf("%d%d%d",&x,&y,&z);
	p = &x;
	q = &y;
	r = &z;
	swap(x,y,z);
	printf("%d\t%d\n%d\t%d\n%d\t%d\n",x,p,y,q,z,r);
	
}
