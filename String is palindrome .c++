#include<iostream>
#include<string>
using namespace std;
int palindrome(string str)
{
    int start=0;
    int end=str.length()-1;
    while(start<end)
    {
        if(str[start]!=str[end])
        {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main()
{
    string str;
    cout<<"\nEnter a string: ";
    cin>>str;

    int result=palindrome(str);
    if(result==1)
        cout<<str<<" is a palindrome "<<endl;
    else
        cout<<str<<" is not a palindrome "<<endl;

        return 0;
}
