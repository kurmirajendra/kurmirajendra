#include<iostream>
using namespace std;
  int getSumofPositiveno(int arr[])
 {
  int sum=0;
    for(int i=0;i<=sizeof(arr);i++)
    {
        if(arr[i]>0)
        {
            sum+=arr[i];
        }
    }
    return sum;
}
int main()
{
    int arr[]={-2,1,4,-1,5};
    int result=getSumofPositiveno(arr);
    cout<<"\nSum of Positive  Number : "<<result<<endl;
    return 0;
}
