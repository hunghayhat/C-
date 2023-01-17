#include<stdio.h>
int main()
{
	int tong;
	int dem = 1, dem_qua = 0, dem_truot =0;
	int type;
	printf("Enter number of student:\n");
	scanf("%d",&tong);
	if (tong < dem)
	printf("Please try again!\n");
	else 
	{
		while (dem <= tong)
		{
			printf("Sinh vien thu %d: ",dem);
			scanf("%d",&type);
			switch(type)
			{
				case 1: dem_qua +=1; break;
				case 2: dem_truot +=1; break;
				default: printf("Please try again!\n"); continue;
			}
			dem +=1;
		}
	}
	printf("So sinh vien qua va truot lan luot la: %d va %d",dem_qua,dem_truot);
	return 0;
}
