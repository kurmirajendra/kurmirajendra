#include<iostream>
using namespace std;
int factors(int num)
{
    int i;
    cout<<"Factors of "<<num<<" are ";
    for(i=2;i<num;i++)
    {
        {
           if(num%i==0)
            cout<<i<<" ";
        }
    }

}
int main()
{
    int n;
    cout<<"Enter number ";
    cin>>n;
    factors(n);
}
