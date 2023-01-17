#include<stdio.h>
int main()
{
	int inspace = 0;
	int enter;
	printf("Enter your string:\n");
	while ((enter = getchar()) != EOF)
	{
		if (enter == ' ')
		{
			if (inspace == 0)
			{
				inspace = 1;
				putchar(enter);
			}	
		}
		if (enter != ' ')
		{
			inspace = 0;
			putchar(enter);
		}
	}
	return 0;
}
