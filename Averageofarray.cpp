#include<iostream>
using namespace std;
int getAverage()
{
    int arr[50],i,n,sum=0,average;
    cout<<"Enter number of elements : ";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    average=sum/n;

    return average;

}
int main()
{
    int result;
    result=getAverage();
    cout<<"Average of array elements is: "<<result<<endl;
}
