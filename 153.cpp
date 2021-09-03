#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

using namespace std;

class openFile
{
public:
    int fd1,fd2;

    openFile(char file1[],char file2[])
    {
        fd1=open(file1,O_RDONLY);
        fd2=open(file2,O_RDONLY);
        if(fd1==-1||fd2==-1)
        {
            cout<<"Unable to open file"<<endl;
        }
        else
        {
            cout<<"File Opened Successfully"<<endl;
        }
    }
    void  Displaysize()
    {
        char Arr1[10],Arr2[10];
        int iRet1=0,iRet2=0;
        int iCnt=0;


        while(((iRet1=read(fd1,Arr1,10))!=0 )&&(iRet2=read(fd2,Arr2,10))!=0)
        {
            if(Arr1==Arr2)
            {
                
            }
            
        }
        
    }
    ~openFile()
    {
        close(fd1);
        close(fd2);
    }


};

int main()
{
    char str1[20],str2[20];
    int iRet=0;
    cout<<"Enter First File name"<<endl;
    cin>>str1;
    cout<<"Enter Second File name"<<endl;
    cin>>str2;

    openFile obj(str1,str2);
    obj.Displaysize();
    
    return 0;
}