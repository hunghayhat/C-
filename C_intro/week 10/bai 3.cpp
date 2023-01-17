#include<stdio.h>
#define MAX 5
int compare_string(int string_1[],int string_2[],int n)
{
	int i;
	for (i=0;i<n;i++)
	{
		if(string_1[i] != string_2[i])
		return 0;
	}
	return 1;
}
int main()
{
	int check,i;
	int mang1[MAX]; 
	int mang2[MAX];
	for(i=0;i<5;i++)
	{
		printf("Lan luot nhap phan tu thu %d cua mang 1 va mang 2: ",i+1);
		scanf("%d%d",&mang1[i],&mang2[i]);
	}
	check = compare_string(mang1,mang2,MAX);
	if (check == 1) printf("2 mang giong nhau.");
	else printf("2 mang khac nhau.");
	return 0;
}
