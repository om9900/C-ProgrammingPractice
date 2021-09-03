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
    void DisplayData()
    {
        char Arr[10];
        int ret=0;

        while((ret=read(fd,Arr,10))!=0)
        {
            write(1,Arr,ret);
        }

        cout<<"\n";
    }
    ~openFile()
    {
        close(fd);
    }


};

int main()
{
    char str[20];
    cout<<"Enter File name"<<endl;
    cin>>str;

    openFile obj(str);
    obj.DisplayData();

    return 0;
}