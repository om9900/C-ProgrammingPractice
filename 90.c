//Last Occurence

#include<stdio.h>
#include<stdlib.h>


int FirstOcc(int Arr[],int iLength,int iNo)
{
	int i=0,iCnt=0,Flag=0;

	for(i=iLength;i!=0;i--)
	{
		if(Arr[i]==iNo)
		{
			break;	
		}
	}

	if(iLength==i)
	{
		return -1;
	}
	else
	{
		return i;
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
	printf("Enter number to find\n");
	scanf("%d",&iValue);
	
	iRet=FirstOcc(Arr,iSize,iValue);
	if(iRet==-1)
	{
		printf("There is no such Element\n");
	}
	else
	{
		printf("index  of first occurence of %d is %d\n",iValue,iRet);
	}

	free(Arr);
	return 0;
}