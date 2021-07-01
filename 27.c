/*4.Write a program which accept number from user and count frequency of 4 in it.
Input :
Output : 2395
0
Input :
Output : 1018
0
Input :
Output : 9440
2	*/
#include<stdio.h>

int CountFour(int iNo)
{
	int iDigit=0;
	int iCount=0;

	if(iNo<0)
	{
		iNo=-iNo;
	}

	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
		{
			iCount++;
		}
		
		iNo=iNo/10;
	}
	return iCount;
}


int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=CountFour(iValue);

	printf("No of Four in %d is %d",iValue,iRet);

	return 0;
}