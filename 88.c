#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Frequency(int Arr[],int iLength,int iNo)
{
	int i=0,eCnt=0,oCnt=0;
	int Flag=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
		
	}

	if(iLength==i)
	{
		return false;
	}
	else
	{
		return true;
	}

}

int main()
{
	int i=0,iSize=0,iValue=0;
	bool iRet=false;
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
	printf("Enter number to search\n");
	scanf("%d",&iValue);

	iRet=Frequency(Arr,iSize,iValue);
	
	if(iRet==true)
	{
		printf("%d is Present\n",iValue);
	}
	else
	{
		printf("%d is not Present\n",iValue);
	}

	free(Arr);
	return 0;
}