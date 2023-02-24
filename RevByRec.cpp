#include <iostream>
using namespace std;
void swap(int *x,int *y)
{
    int *temp=x;
    x=y;
    y=temp;
}
void funct(int *arr,int start,int end)
{
    if(start>end)
    {
        return;
    }
    //cout<<"->"<<n<<" ";
    swap(arr[start],arr[end]);
    funct(arr,start+1,end-1);
    
}

int main() {
    // Write C++ code here
    int arr[]={5,4,3,2,1};
   funct(arr,0,4);
   for(int i=0;i<5;i++)
   {
       cout<<arr[i]<<" ";
   }
    return 0;
}
