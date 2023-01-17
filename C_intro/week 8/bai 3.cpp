#include<stdio.h>
int main(void)
{
	double total_pay;
	int count_emp;
	int number_emp;
	double hours, rate, pay;
	printf("Enter number of employees:\n");
	scanf("%d",&number_emp);
	total_pay = 0;
	count_emp = 0;
	while (count_emp < number_emp){
		printf("Hours and rate:\n");
		scanf("%lf %lf",&hours, &rate);
		
		pay = hours * rate;
		printf("Pay is %6.2f\n",pay);
		
		count_emp = count_emp + 1;
		total_pay = total_pay + pay;
	}
	printf("All employees processed\n");
	printf("Total payroll is %8.2f\n", total_pay);
	return 0;
}
