#include<iostream>
using namespace std;
int main()
{
    int i,num,isPrime=1;
    cout<<"Enter a number:";
    cin>>num;
    if(num<=1){
        isPrime=0;
    }
    else
    {
        for(i=2;i<=num/2;i++){
            if(num%i==0){
                isPrime=0;
              break;
            }
        }
    }
    if(isPrime)
    {
        cout<<num<<" is a prime number.\n";
    }
    else
    {
       cout<<num<<" is not a prime number.\n";

    }
    return 0;
}

