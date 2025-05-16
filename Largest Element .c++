#include<iostream>
using namespace std;
int main()
{
    int  arr[50],n,i,max;
    cout<<"Enter the number of elements:";
    cin>>n;
    cout<<"Enter "<<n<<" elements:\n";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"The largest element is: "<<max;
    return 0;
}

