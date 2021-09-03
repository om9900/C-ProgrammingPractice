#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

using namespace std;

class FileConcat
{
public:
	int fd1,fd2,fd3,fd4;

	FileConcat(char Fname[],char Sname[],char Tname[],char NName[])
	{
		fd1=open(Fname,O_RDWR);
		fd2=open(Sname,O_RDWR);
        fd3=open(Tname,O_RDWR);
        fd4=creat(NName,0777);
        fd4=open(NName,O_RDWR|O_APPEND);
		if(fd1==-1 || fd2==-1 || fd3==-1 ||fd4==-1)
        {
            cout<<"Unable to open file"<<endl;
        }
        else
        {
            cout<<"File Opened Successfully"<<endl;
        }
	}

    void FileX()
    {
        char Arr[10];
        int ret=0;
        while((ret=read(fd1,Arr,10))!=0)
        {
            write(fd4,Arr,ret);   
        }  
        while((ret=read(fd2,Arr,10))!=0)
        {
            write(fd4,Arr,ret);   
        }  
        while((ret=read(fd3,Arr,10))!=0)
        {
            write(fd4,Arr,ret);   
        }  
    }

	~FileConcat()
	{
		close(fd1);
		close(fd2);
        close(fd3);
        close(fd4);
	}

};


int main()
{
    char str1[20],str2[20],str3[30],str4[30];
    char ch='\0';
    int iRet=0;
    cout<<"Enter First File name"<<endl;
    cin>>str1;
    cout<<"Enter Second File name"<<endl;
    cin>>str2;
    cout<<"Enter Second File name"<<endl;
    cin>>str3;

    cout<<"Enter File name in which you wanr to copy data"<<endl;
    cin>>str4;

    
    FileConcat obj(str1,str2,str3,str4);
    obj.FileX();
   
    
    return 0;
}