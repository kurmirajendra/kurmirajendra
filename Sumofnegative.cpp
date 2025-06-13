#include<iostream>
using namespace std;
int getSumofNegativeno(int arr[])
{
    int sum=0;
    for(int i=0;i<=sizeof(arr);i++)
    {
        if(arr[i]<0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int main()
{
    int  arr[]={-2,-1,3,4,-4};
    int result=getSumofNegativeno(arr);
    cout<<"\nSum of Negative Numbers : "<<result<<endl;
}
