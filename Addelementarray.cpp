#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,n,pos,value;
     cout<<"Enter number of elements in array:";
     cin>>n;
     for(i=0;i<n;i++)
     {
         cin>>arr[i];
     }
     cout<<"\nEnter position to insert(0 to "<<n<<")"<<" ";
     cin>>pos;

     if(pos<=n)
     {
         cout<<"\nEnter value to insert :";
         cin>>value;
         for(i=n;i>pos;i--)
         {
             arr[i]=arr[i-1];
         }
         arr[pos]=value;
         n++;
         cout<<"\nArray after insertion :";
         for(i=0;i<n;i++)
         {
             cout<<arr[i]<<" "<<endl;
         }

     }
     else
     {
         cout<<"\nInvalid Position: ";
         cout<<"\nEnter position to insert (0 to "<<n;
     }

     return 0;
}

