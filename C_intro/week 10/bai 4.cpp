#include<stdio.h>

int giamdan (int string[10])
{
	int i,j,tmp;
	for (i=0;i<9;i++){
		for(j=i+1; j<10; j++)
		{
			if (string[i] <= string[j]){
				tmp = string[i];
				string[i]=string[j];
				string[j]=tmp;
			}
		
		}
	}
}
int le_giamdan (int string[10])
{
	int tmp;
	int i,j;
	for (i=0;i<10;i++)
		for(j=i+1;j<10;j++){
			if(string[i]<= string[j] && (string[i]%2 != 0) && (string[j]%2 !=0) ){
				tmp = string[i];
				string[i] = string[j];
				string[j]= tmp;
				printf("%d",string[i]);
			}
		}
}
int main(){
	int string[10];
	int i;
	printf("Nhap mang gom 10 phan tu:\n");
	for(i=0;i<10;i++){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&string[i]);
	}
	giamdan(string);
	printf("Cac phan tu cua mang theo thu tu giam dan la: ");
	for (i=0;i<10;i++)
		printf("%d ",string[i]);
		printf("\n");
	le_giamdan(string);
	printf("Cac phan tu le cua mang theo thu tu giam dan la: ");
	for (i=0;i<10;i++){
		if (string[i]%2!=0)
		printf("%d ",string[i]);
	}
	return 0;
}
