#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength)
{
	int i=0,iProduct=1;
	int iCnt=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2!=0)
		{
			iProduct=iProduct*Arr[i];
			iCnt++;
		}
		
	}

	if(iCnt!=0)
	{
		return iProduct;
	}
	else
	{
		return -1;
	}

}

int main()
{
	int i=0,iSize=0,iRet=0,iValue=0;
	int *Arr=NULL;

	printf("Enter Number of Elements\n");
	scanf("%d",&iSize);

	
	Arr=(int *)malloc(iSize*sizeof(int));
	if(Arr==NULL)
	{
		return -1;
	}
	printf("Enter the Elements\n");
	for (i = 0; i < iSize; i++)
	{
		scanf("%d",Arr+i);
	}

	iRet=Frequency(Arr,iSize);
	if(iRet==-1)
	{
		printf("There is no Odd Number\n");
	}
	else
	{
		printf("Product of ODD number  is %d\n",iRet);

	}
	free(Arr);
	return 0;
}