#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


bool Frequency(int Arr[],int iLength)
{
	int i=0,eCnt=0,oCnt=0;
	int Flag=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			Flag=1;
			break;
		}
		
	}
	if(Flag==1)
	{
		return true;
	}
	else
	{
		return false;
	}
	

}

int main()
{
	int i=0,iSize=0;
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

	iRet=Frequency(Arr,iSize);
	
	if(iRet==true)
	{
		printf("11 is Present\n");
	}
	else
	{
		printf("11 is not Present\n");
	}

	free(Arr);
	return 0;
}