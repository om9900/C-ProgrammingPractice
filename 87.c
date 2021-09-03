#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength,int iNo)
{
	int i=0,iCnt=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			iCnt++;
		}
	}

	return iCnt;

}

int main()
{
	int i=0,iSize=0,iRet=0,iValue=0;
	int *Arr=NULL;

	printf("Enter Number of Elements\n");
	scanf("%d",&iSize);

	printf("Enter number to Count\n");
	scanf("%d",&iValue);

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

	iRet=Frequency(Arr,iSize,iValue);
	printf("Count of %d is %d\n",iValue,iRet);

	free(Arr);
	return 0;
}