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
    int  Displaysize()
    {
        char Arr[10];
        int ret=0;
        int iCnt=0;

        while((ret=read(fd,Arr,10))!=0)
        {
            iCnt=iCnt+ret;
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
    char str[20];
    int iRet=0;
    cout<<"Enter File name"<<endl;
    cin>>str;

    openFile obj(str);
    iRet=obj.Displaysize();
    cout<<"File Size is "<<iRet<<endl;
    return 0;
}