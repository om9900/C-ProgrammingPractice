#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<iostream>

using namespace std;

class FileConcat
{
public:
	int fd1,fd2;

	FileConcat(char Fname[],char Sname[])
	{
		fd1=open(Fname,O_RDWR);
		fd2=open(Sname,O_RDWR|O_APPEND);
		if(fd1==-1 ||fd2==-1)
        {
            cout<<"Unable to open file"<<endl;
        }
        else
        {
            cout<<"File Opened Successfully"<<endl;
        }
	}

	void FileConcatX()
	{
		char Arr[10];
        int ret=0;

        while((ret=read(fd1,Arr,10))!=0)
        {
            write(fd2,Arr,ret);
            //cout<<Arr;
            //write(1,Arr,ret);
        }
         //cout<<"\n";
	}

	~FileConcat()
	{
		close(fd1);
		close(fd2);
	}

};


int main()
{
    char str1[20],str2[20];
    char ch='\0';
    int iRet=0;
    cout<<"Enter First File name"<<endl;
    cin>>str1;
    cout<<"Enter Second File name"<<endl;
    cin>>str2;
    
    FileConcat obj(str1,str2);
    obj.FileConcatX();
   
    
    return 0;
}