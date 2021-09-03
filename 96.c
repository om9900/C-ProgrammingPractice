#include<stdio.h>
#include<stdlib.h>

void Digit(int *Arr,int iLength)
{
	int i=0;
	int iDigit=0,iCnt=0;
	for(i=0;i<iLength;i++)
	{
		iDigit=Arr[i];
		while(iDigit!=0)
		{
			iDigit=iDigit/10;
			iCnt++;
		}
		if(iCnt==3)
		{
			printf("Three digit number->%d\n",Arr[i]);
		}

		iCnt=0;
	}

}
int main()
{
	int *arr=NULL;
	int i,iValue=0,iRet=0;

	printf("Enter number elements\n");
	scanf("%d",&iValue);

	arr=(int *)malloc(iValue*sizeof(int));

	printf("Enter the elements\n");
	for(i=0;i<iValue;i++)
	{
		scanf("%d",&arr[i]);
	}

	Digit(arr,iValue);
	

	free(arr);

	return 0;
}