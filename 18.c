//5.Write a program which accept number from user and return difference betweee summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
	int i=0;
	int NFSum=0;
	int FSum=0;
	int Ans=0;
	
	for (i = 1; i <(iNo) ; i++)
	{
		if((iNo%i)==0)
		{
			FSum=FSum+i;
		}
		else
		{
			NFSum=NFSum+i;	
		}
	}
	printf("%d\n",FSum);
	printf("%d\n",NFSum);
	Ans=FSum-NFSum;
	return Ans;
}


int main()
{
	int iValue=0;
	int iRet=0;

	printf("Enter Number\t");
	scanf("%d",&iValue);

	iRet=FactDiff(iValue);

	printf("Difference is  %d",iRet);

	
	return 0;
}