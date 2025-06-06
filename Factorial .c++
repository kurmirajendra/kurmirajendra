#include<iostream>
using namespace std;

int factorial(int num)
{
    int i,fact=1;
        for(i=1;i<=num;i++)
        {
            fact*=i;
        }

        return fact;
}
int main()
{
    int n;
    cout<<"Enter a  positive integer: ";
    cin>>n;
    if(n<0)

    cout<<"\nFactorial of negative number is not exist.";

        else
    {
        int res=factorial(n);
        cout<<"\nFactorial of "<<n<<" is "<<res<<"\n";
    }
    return 0;
}
