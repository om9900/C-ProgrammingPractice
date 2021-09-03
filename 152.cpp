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
        fd=open(name,O_WRONLY|O_APPEND);
        if(fd==-1)
        {
            cout<<"Unable to open file"<<endl;
        }
        else
        {
            cout<<"File Opened Successfully"<<endl;
        }
    }
    void WriteData(char text[])
    {
        int iCnt=0;
        char *start=text;
        while(* text!=0)
        {
            iCnt++;
            text++;
        }
        write(fd,start,iCnt);
    }
    ~openFile()
    {
        close(fd);
    }
};

int main()
{
    char str[20],str2[30];;
    int iRet=0;
    cout<<"Enter File name"<<endl;
    cin>>str;
    cout<<"Enter what you want to insert"<<endl;
    cin>>str2;
    
    openFile obj(str);
    obj.WriteData(str2);
    return 0;
}