#include<stdio.h>
void cach_1 (){
	int a,c,b;
	scanf("%d%d%d",&a,&b,&c);
	printf("%u %u %u",&a,&b,&c);
}
void cach_2(){
	int a,b,c;
	int *ptr;
	scanf("%d%d%d",&a,&b,&c);
	ptr = &a;
	printf("%d\n",&ptr);
	ptr=&b;
	printf("%d\n",&ptr);
	ptr=&c;
	printf("%d\n",&ptr);
}
int main(){
	cach_2();
	return 0;
} 
