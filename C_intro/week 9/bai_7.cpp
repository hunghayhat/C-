#include<stdio.h>
void kiemtra_chuso(int n)
{
	while (n>0)
	{
		if((n%10)%2==0)
		printf("%d chan\n",n%10);
		else 
		printf("%d le\n",n%10);
		n=(n-n%10)/10;
	}
}
int main()
{
	int n;
	printf("Nhap so tu nhien n:");
	scanf("%d",&n);
	kiemtra_chuso(n);
	return 0;
}

