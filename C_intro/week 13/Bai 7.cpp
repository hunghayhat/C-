#include<stdio.h>
#include<string.h>

int main(){
	char prods [5] [27] = {"TV127 31 inch Television", "CD057 CD player", "TA877 Answering Machine",
							"CS409 Car Stereo", "PC655 Personal Computer"};
	char lookup[27], *strPtr = NULL;
	int index;
	printf("\t Product Database\n\n");
	printf("Enter a product number to search for: ");
	scanf("%s", lookup);
	for (index = 0; index < 5; index++){
		strPtr = strstr(prods[index], lookup);
		if (strPtr!=NULL)
		break;
	}
	if (strPtr== NULL)
	printf("No matching product was found.\n");
	else 
	printf("%s\n",prods[index]);
}
