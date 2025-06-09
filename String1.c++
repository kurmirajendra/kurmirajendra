#include<iostream>
#include<string>
using namespace std;

int getfind(string str,char ch)
{
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;

}
int main()
{
    string str;
    cout<<"\nEnter a string ";
    getline(cin,str);
    cout<<"\nEnter Character to find : ";
    char ch;
    cin>>ch;
    int res=getfind(str,ch);
    if(res!=-1)
    {
        cout<<"\nFound at index "<<res<<endl;
    }
    else
        cout<<"\nNot Found!!"<<endl;

}
