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
    int  Displaychar(char ch)
    {
        char Arr[10];
        int ret=0;
        int iCnt=0;

        while((ret=read(fd,Arr,10))!=0)
        {
            for(int i=0;i<ret;i++)
            {
                if(Arr[i]==ch)
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
    char str[20];
    char ch='\0';
    int iRet=0;
    cout<<"Enter File name"<<endl;
    cin>>str;
    cout<<"Enter the character that you want to search"<<endl;
    cin>>ch;

    openFile obj(str);
    iRet=obj.Displaychar(ch);
    cout<<"count of "<<ch<<" is "<<iRet<<endl;
    return 0;
}