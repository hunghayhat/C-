#include<stdio.h>
int main()
{
	char c;
	while ((c = getchar()) != -1)
	{
		if (c == '.')
		break;
		else if (c >= '0' && c <= '9')
		continue;
		else putchar(c);
		
	}
	printf ("***Good bye***\n");
	return 0;
}
