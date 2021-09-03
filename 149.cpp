#include<iostream>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h>

using namespace std;

class createFile
{
public:
	int fd;
	createFile(char *name)
	{
		fd=creat(name,0777);
		if(fd==-1)
		{
			cout<<"Unable to create File"<<endl;
		}
		else
		{
			cout<<"File Created Successfully"<<endl;
		}
	}
	~createFile()
	{
		close(fd);
	}
};

int main()
{
	char str[20];

	cout<<"Enter File name"<<endl;
	cin>>str;

	createFile cobj(str);

}