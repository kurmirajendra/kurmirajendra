#include<iostream>
using namespace std;
class Person
{
    string name,address,contact;
public:
    void setPerson(string name,string address,string contact)
    {
        this->name=name;
        this->address=address;
        this->contact=contact;
    }
    void getPerson()
    {
        cout<<"Name "<<name<<"\n"<<"Address "<<address<<"\n"<<"Contact no "<<contact<<"\n";
    }
};
class Student:public Person
{
    int admno,sem;
public:
    void setStudent(int admno,int sem)
    {
        this->admno=admno;
        this->sem=sem;
    }
    void getStudent()
    {
        cout<<"\nAdmission no "<<admno<<"\n"<<"Semester "<<sem<<"\n\n";
    }
};
class Teacher : public Person
{
    string subject;
    public:

    void setTeacher(string subject)
    {
      this->subject=subject;
    }
    void getTeacher()
    {
        cout<<"\nSubject "<<subject;
    }
};
int main()
{
    Student s1;
    Teacher t1;

    s1.setPerson("Ram","Sagar","9032143322");
    t1.setPerson("Shyam"," Sagar ","9032143321");
    t1.setTeacher("Programming");
    s1.setStudent(10432,4);
    s1.getPerson();
    s1.getStudent();
    t1.getPerson();
    t1.getTeacher();
}
