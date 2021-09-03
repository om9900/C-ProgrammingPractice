/*1. Accept number of rows and number of columns from user and display below
pattern.
Input : iRow = 4  iCol = 4
Output :*	*	*	#	
		*	*	#	*	
		*	#	*	*	
		#	*	*	*			
				     	*/
#include <stdio.h>

void Pattern(int iRow,int iCol)
{
	int i=0,j=0,iTemp=0;
	iTemp=iCol;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(iTemp==j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
	iTemp--;
	printf("\n");
	}
	printf("\n");
}

void Pattern1(int iRow,int iCol)
{
	int i=0,j=0;
	
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j!=0;j--)
		{
			if(i==j)
			{
				printf("#\t");
			}
			else
			{
				printf("*\t");
			}
		}
	
	printf("\n");
	}
	printf("\n");
}


int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter number of Rows\n");
	scanf("%d",&iValue1);

	printf("Enter number of columns\n");
	scanf("%d",&iValue2);

	Pattern(iValue1,iValue2);
	Pattern1(iValue1,iValue2);
}