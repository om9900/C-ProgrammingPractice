#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

using namespace std;

class openFile
{
public:
    int fd;

    openFile(char name[])
    {
        fd=open(name,O_RDONLY);
        if(fd==-1)
        {
            cout<<"Unable to open file"<<endl;
        }
        else
        {
            cout<<"File Opened Successfully"<<endl;
        }
    }
    int  Displaychar(char ch[])
    {
        char Arr[10];
        int ret=0;
        int iCnt=0;

        while((ret=read(fd,Arr,10))!=0)
        {
            for(int i=0;i<ret;i++)
            {
                if(Arr[i]==ch[i])
                {
                    iCnt++;
                }  
            }
        }
        return iCnt;
    }
    ~openFile()
    {
        close(fd);
    }
};

int main()
{
    char str1[20],str2[30];
    
    int iRet=0;
    cout<<"Enter File name"<<endl;
    cin>>str1;
    cout<<"Enter the Word that you want to search"<<endl;
    cin>>str2;

    openFile obj(str1);
    iRet=obj.Displaychar(str2);
    cout<<"count of "<<str2<<" is "<<iRet<<endl;
    return 0;
}