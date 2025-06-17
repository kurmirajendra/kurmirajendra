#include<iostream>
using namespace std;
class College
{
    string name,type;
    int nos;
public:
    College()
    {
        name="BTIRT ";
        type="Engineering ";
        nos=900;
    }
    College(string name)
    {
        this->name=name;
        type="Management ";
        nos=500;
    }
    void getCollege()
    {
        cout<<"Name             : "<<name;
        cout<<"\nCollege Type     : "<<type;
        cout<<"\nNo of students   : "<<nos<<endl;
    }
};
int main()
{
    College c1,c2("GyanSagar");
    c1.getCollege();
    c2.getCollege();
}
