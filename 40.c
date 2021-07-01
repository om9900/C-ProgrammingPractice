/*2. Write a program which accept range from user and display all even numbers in between that range.
Input :23 35
Output : 24  26 28 30 32 34 */

#include <stdio.h>

void RangeDisplayEven(int iNo1,int iNo2)
{
	int iCnt=0;
	if(iNo1>iNo2)
	{
		printf("Invalid Range\n");
		return;
	}

	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d\t",iCnt);
		}
	}
	printf("\n");
}

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter First Number\n");
	scanf("%d",&iValue1);

	printf("Enter Second Number\n");
	scanf("%d",&iValue2);

	RangeDisplayEven(iValue1,iValue2);

	return 0;
}
