#include<stdio.h>
#include<math.h>
int tong_lap_phuong(int n)
{
	int i = 1, tong=0;
	for (i=1;i<=n;i++)
	{
		tong = tong + i*i*i;
	}
	return tong;
}
void uoc_so(int n)
{
	int i;
	for (i=2;i<=n;i++)
	{
		if (n%i==0)
		printf("%d ",i);		
	}
	printf("\n");
}
void perfect_square_number(int n)
{
	int i;
	for (i=0;i<=sqrt(n);i++)
	{
		printf("%d ",i*i);
	}		
}
int main()
{
	printf ("%d\n",tong_lap_phuong(5));
	uoc_so(10);
	perfect_square_number(1000);
	return 0;
	
}
