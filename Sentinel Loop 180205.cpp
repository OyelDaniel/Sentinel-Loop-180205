#include "stdio.h"
int main()
{
	float w,totalW;
	char ans;
	ans = 'y','Y';
	
	while ((ans=='Y')||(ans=='y'))
	{
		printf("\nEnter weight: ");
		scanf("%f",&w);
		totalW+=w;
		printf("\nDo you want to re-enter weight: ");
		fflush(stdin);
		scanf("%c",&ans);
	}
	printf("Your total weight is %.2f", totalW);
	return 0;
}

