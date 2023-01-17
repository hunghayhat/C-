#include<stdio.h>
int main(){
	int dem_0 = 0;
	int sophantu, i;
	int phantu, dem = 0, max=0, dem_max = 0;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d",&sophantu);
	int mang[sophantu];
	for (i=0;i<sophantu;i++){
		printf("Nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&mang[i]);
		if (mang[i] == 0)
		dem_0 ++;
	}
	printf("Phan tu '0' xuat hien %d lan\n",dem_0);
	for (i=0; i<sophantu; i++){
		if (mang[i]==0)
			dem_max++;
		else dem_max=0;
		if (dem_max>max) max=dem_max;	
	}

	printf("Do dai day con bang 0 lon nhat la: %d\n",max);
	
	dem =0;
	printf("Nhap phan tu ban muon kiem tra: ");
	scanf("%d",&phantu);
	for (i=0;i<sophantu;i++)
	{
		if (mang[i] == phantu)
		dem++;
	}
	printf("Phan tu '%d' xuat hien %d lan\n",phantu,dem);
	
	return 0;
	
}
