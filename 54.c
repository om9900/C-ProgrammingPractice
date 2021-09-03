/*1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4  iCol = 4
Output : A  B  C  D
		 A  B  C  D
		 A  B  C  D
		 A  B  C  D    */

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt=0,jCnt=0;
	char ch=65;

	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(jCnt=0;jCnt<iCol;jCnt++,ch++)
		{
			printf(" %c ",ch);
		}
		ch=65;
		printf("\n");
	}
}


int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter Number of Rows\n");
	scanf("%d",&iValue1);

	printf("Enter Number of  Columns\n");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);
	return 0;
}




