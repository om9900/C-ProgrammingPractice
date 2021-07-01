//2.Write a program which accept number from user and display its factors in decreasing order.
//Input : 12
//Output : 6 4 3 2 1

#include<stdio.h>

void FactRev(int iNo1)
{
	int iMult=1,iCnt=0;

	for(iCnt=((iNo1/2)+1);iCnt>0;iCnt--)
	{
		if(iNo1%iCnt==0)
		{
			printf("%d \t",iCnt);
		}
	}
	
}

int main(int argc, char const *argv[])
{
	int iValue=0;
	int iRet=0;
	printf("Enter  Number\t");
	scanf("%d",&iValue);

	FactRev(iValue);
	
	return 0;
}