/*1. Accept number from user and display below pattern.
Input : 5
Output : A B C D E  */
#include<stdio.h>

void Pattern(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo>26)
	{
		return;
	}
	int iCnt=0;
	char ch=65;

	for(iCnt=1;iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	printf("\n");
}


int main()
{
	int iValue=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	Pattern(iValue);
	return 0;
}