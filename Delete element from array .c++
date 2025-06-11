#include<iostream>
using namespace std;
int main()
{
    int arr[50],n,i,pos;
    cout<<"Enter Elements in array ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the position to delete 0 to "<<n-1<<"\n";
    cin>>pos;
    if(pos<0 ||pos>n)
        cout<<"\nInvalid position ";
    else
    {
        for(i=pos;i<n-1;i++)
        {
            arr[i]=arr[i+1];
        }
        n--;

        cout<<"\nArray after deletion "<<endl;
        for(i=0;i<n;i++)
            cout<<arr[i]<<endl;
    }

    return 0;

}
