#include<stdio.h>
void printchars(int ch, int n)
{
	int i;
	for (i=0; i<n;i++)
	printf("%c",ch);
}
int main()
{
	char ch = '*';
	int i,n;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printchars(ch,i);
		printf("\n");
	}
	return 0;
}
