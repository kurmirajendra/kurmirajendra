#include<iostream>
using namespace std;
int factorial(int num)
{
    if(num==1||num==0)
        return 1;
    return num*factorial(num-1);
}
int getCatalan(int n)
{
    return factorial(n*2)/(factorial(n+1)*factorial(n));
}
int main()
{
    int n;
    cout<<"Enter the number of N term :";
    cin>>n;
    cout<<"\nCatalan number up to "<<n<<" term :";
    for(int i=0;i<n;i++)
    {

        cout<<getCatalan(i)<<" ";
    }
    return 0;
}
