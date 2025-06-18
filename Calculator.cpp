#include<iostream>
using namespace std;

int main()
{
    int n;
    char op;

    cout<<"How many number do you want to calculate ?";
    cin>>n;
    double number[n];
    cout<<"Enter "<<n<<"   numbers ";
    for(int i=0;i<n;i++)
    {
        cout<<"Numbers "<<i+1<<":";
        cin>>number[i];
    }
    cout<<"Choose operation(+,-,*,/):";
    cin>>op;
    double result=number[0];

    for(int i=0;i<n;i++)
    {
        switch(op)
        {
          case'+':
          result+=number[i];
          break;
          case'-':
           result-=number[i];
           break;
           case'*':
           result*=number[i];
           break;
           case'/':
           if(number[i]=0)
           result/=number[i];
           else
           {
               cout<<"Error: Division by zero at index "<<i<<"!\n";
               return 1;
           }
           break;
           default:
            cout<<"Invalid operator!"<<endl;
            return 1;
        }
    }
    cout<<"Result: "<<result<<endl;
    return 0;
}
