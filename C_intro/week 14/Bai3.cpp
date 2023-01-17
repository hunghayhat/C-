#include<stdio.h>
typedef struct student
{
	char id[6];
	char name[31];
	float grade;
	char classment;
} studen_t;
student nhapham(){
	student a;
	printf("Nhap id:");
	scanf("%s",a.id);
	printf("Nhap ten:");
	fflush(stdin);
	gets(a.name);
	do {
	printf("Nhap diem:");
	scanf("%f",&a.grade);
} while (a.grade<0 || a.grade>10);
	return a;
}
void xeploai(student *a){
	if (a->grade>=9 && a->grade<=10)
		a->classment = 'A';
	else if (a->grade>=8 && a->grade<9)
		a->classment = 'B';
	else if(a->grade<8 && a->grade>=6.5)
		a->classment = 'C';
	else 
		a->classment= 'D';
}
int main(){
	int n, i, j, max;
	printf("Nhap so sinh vien:");
	scanf("%d",&n);
	student a[n], tmp;
	for (i=0; i<n; i++){
		a[i]= nhapham();
		xeploai(&a[i]);

	}
	for (i=0; i<n; i++){
		for (j=i+1; j<n; j++){
			if (a[i].grade < a[j].grade){
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
	printf("%-20s\t%-20s\t\t%-20s\t%-20s\n","ID","Name","Grade","Classment");
	for (i=0; i<n; i++){
		printf("%-20s\t%-20s\t\t%-20.1f\t%-20c\n",a[i].id,a[i].name,a[i].grade,a[i].classment);
	}
		
}

