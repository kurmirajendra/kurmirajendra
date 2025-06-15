#include<iostream>
using namespace std;
#include<vector>
int getuniqueno(int arr[],int size)
{

    cout<<"\nUnique elements : ";

    for(int i=0;i<size;i++)
    {
      bool isUnique=true;

      for(int j=0;j<size;j++)
      {
          if(i!=j && arr[i]==arr[j])
          {
              isUnique=false;
              break;
          }
      }
      if(isUnique)
      {
          cout<<arr[i]<<" ";
      }
    }
}
int main()
{
    int arr[]={4,5,6,7,4,8,6};
    int size1=sizeof(arr)/sizeof(arr[0]);
    cout<<"\nArray :";
    for(int i=0;i<size1;i++)
    {
       cout<<arr[i]<<endl;
    }
    getuniqueno(arr,size1);
     return 0;
}
