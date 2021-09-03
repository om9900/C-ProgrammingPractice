/*3. Accept number from user and display below pattern.
Input : 5
Output : 1 * 2 * 3 * 4 * 5     */

#include<stdio.h>

void Pattern(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iCnt=0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf(" %d ",iCnt);
		printf(" * ");
	}
}

int main()
{
	int iValue=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	Pattern(iValue);
	return 0;
}

