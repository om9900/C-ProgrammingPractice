#include<stdio.h>
#include<stdlib.h>


void Frequency(int Arr[],int iLength,int iStart,int iEnd)
{
	int i=0,iCnt=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>=iStart && Arr[i]<=iEnd)
		{
			printf("%d\n",Arr[i]);
		}
	}

}

int main()
{
	int i=0,iSize=0,iRet=0,iValue1=0,iValue2=0;
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

	printf("Enter Starting Pointt\n");
	scanf("%d",&iValue1);
	printf("Enter the Ending Point\n");
	scanf("%d",&iValue2);

	Frequency(Arr,iSize,iValue1,iValue2);
	

	free(Arr);
	return 0;
}