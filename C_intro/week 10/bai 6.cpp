#include<stdio.h>
#define SIZE 3
int main(){
	int a[3][SIZE], b[3][SIZE], c[3][SIZE];
	int i,j,k;
	for (i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++){
			printf("Nhap phan tu thu %d cua mang %d cua mang 2 chieu a: ",j+1,i+1);
			scanf("%d",&a[i][j]);
		}
			
	for (i=0; i<SIZE; i++)
		for(j=0; j<SIZE; j++){
			printf("Nhap phan tu thu %d cua mang %d cua mang 2 chieu b: ",j+1,i+1);
			scanf("%d",&b[i][j]);
		}
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			c[i][j]=0;
			for (k=0; k<3; k++)
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	printf("Ma tran C: \n");
	for (i=0; i<3; i++){
		printf("\n");
		for (j=0; j<3; j++)
			printf("%d  ",c[i][j]);
	}
		
	return 0;
}
