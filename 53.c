/*5. Accept number of rows and number of columns from user and display
below pattern.
Input : iRow = 3  iCol=4

Output: 1 1 1 1 
		2 2 2 2
		3 3 3 3			*/

#include<stdio.h>

void Pattern(int iRow,int iCol)
{
	int iCnt=0,jCnt=0;

	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(jCnt=0;jCnt<iCol;jCnt++)
		{
			printf(" %d ",iCnt);
		}
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


