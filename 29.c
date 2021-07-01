/*1.Write a program which accept number from user and return the count of even
digits.
Input :
Output : 2395
1
Input :
Output : 1018
2
Input :
Output : -1018
2
Input :
Output : 8462
4*/
#include<stdio.h>

int CountEven(int iNo)
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
		if(iDigit%2==0)
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

	iRet=CountEven(iValue);

	printf(" %d",iRet);

	return 0;
}