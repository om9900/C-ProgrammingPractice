/*5. Write a program which accept N and print first 5 multiples of N.
Input : 4
Output : 4 8 12 16 20   */

#include<stdio.h>


void MultipleDisplay(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}

	for(iCnt=1;iCnt<=5;iCnt++)
	{
		printf("%d\t",iCnt*iNo);
	}
	printf("\n");

}

int main()
{
	int iValue=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	MultipleDisplay(iValue);

}

