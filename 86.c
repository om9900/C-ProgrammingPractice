#include<stdio.h>
#include<stdlib.h>


int Frequency(int Arr[],int iLength)
{
	int i=0,iCnt=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}

	return iCnt;

}

int main()
{
	int i=0,iSize=0,iRet=0;
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
	printf("Count of 11 is %d\n",iRet);

	free(Arr);
	return 0;
}