#include<iostream>
using namespace std;
class Student
{
    string name,address;
    int stid;
public:
    Student()
    {
     cout<<"Enter Student name ";
     cin>>name;
     cout<<"\nEnter Address ";
     cin>>address;
     cout<<"Enter Student Id ";
     cin>>stid;
    }
    void getStudent()
    {
        cout<<"\nName "<<name;
        cout<<"\nAddress "<<address;
        cout<<"\nStudent id "<<stid;
    }

};
int main()
{
    Student s1;
    s1.getStudent();
}
