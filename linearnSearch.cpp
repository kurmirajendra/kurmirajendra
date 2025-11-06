#include<iostream>
using namespace std;
int linearSearch(int arr[],int val,int sz)
{
    for(int i=0;i<sz;i++)
    {
        if(arr[i]==val)
            return i;
    }
    return 0;
}
int main()
{
    int arr[]={2,3,1,4,6,5,8};
    int val;
    cout<<"Enter no to find ";
    cin>>val;
    int sz=sizeof(arr)/sizeof(int);
    int value = linearSearch(arr,val,sz);
    if(value==0)
        cout<<"\nValue not Found ";
    else
    cout<<"Value Found at "<<value;
}
