#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int dem=2;
	if (n < 2)
	return 0;
	else if (n ==2)
	return 1;
	else if (n>2){
		for (dem = 2; dem <sqrt(n); dem++ )
	{
		if (n % dem == 0)
		return 0;
	}
	return 1;
}}
int main()
{
	int n;
	printf("Nhap so tu nhien n: ");
	scanf("%d",&n);
	printf("%d",is_prime(n));
	return 0;
	
}
	
