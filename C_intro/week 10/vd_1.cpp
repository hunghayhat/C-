#include<stdio.h>
int main()
{
	int month[12];
	int rainfall[12];
	int i;
	for (i=0;i<12;i++)
	{
		month[i]=i+1;
	}
	for (i=0; i<12; i++)
	{
		printf("Nhap luong mua thang %d: ",i+1);
		scanf("%d",&rainfall[i]);
	}
	printf("Month\tRainfall (in mm)\n");
	for (i=0;i<12;i++){
	printf("%d\t%d\n",month[i],rainfall[i]);
}
	return 0;
}
