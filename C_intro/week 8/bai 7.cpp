#include<stdio.h>
int main()
{
	int n;
	int dem = 1, tong = 1;
	printf("Nhap so tu nhien n\n");
	scanf("%d",&n);
	if (n<0)
	{
		printf("Tu duy di, svbk co the ngu nhu the khong?\n");
	}
	else if (n==0 && n==1)
	printf("n! = 1");
	
	else if (n > 1)
	{
		while (dem <n)
		{
			dem+=1;
			tong *=dem;
		}
		printf("n! = %d",tong);
	}
	return 0;
}
