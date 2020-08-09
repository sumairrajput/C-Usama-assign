#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    string fname;
    int age;

    void studentData()
    {
        cout << "Student detail" << endl;
        cout << "My name is: " << name << endl;
        cout << "My father name is: " << fname << endl;

        cout << "My age is: " << age << endl;
        deptDetail();
    }
    void deptDetail()
    {
        cout << endl
             << "Departments Detail" << endl;
    }
};

class ComputerDept : public Student
{
public:
    void teachCompt()
    {
        cout << "This is Computer departmet." << endl;
        cout << "Head of Dept: Ramzan" << endl;
        cout << "Total strength is: 1400" << endl;
        cout << "Fee per semester: 42K" << endl
             << endl;
    }
};

class BioDept : public Student
{
public:
    void bioDept()
    {
        cout << "This is Biology departmet." << endl;
        cout << "Head of Dept: Addel Rifat" << endl;
        cout << "Total strength is: 2500" << endl;
        cout << "Fee per semester: 60K" << endl
             << endl;
    }
};

class PakDept : public Student
{
public:
    void pakDept()
    {
        cout << "This is Pakistan study departmet." << endl;
        cout << "Head of Dept: Nameem-ul-haq" << endl;
        cout << "Total strength is: 1200" << endl;
        cout << "Fee per semester: 30K" << endl
             << endl;
    }
};

int main()
{
    ComputerDept obj1;
    obj1.name = "Usama";
    obj1.fname = "Usama Secret";
    obj1.age = 23;
    obj1.studentData();
    obj1.teachCompt();

    BioDept obj2;
    obj2.bioDept();
    PakDept obj3;
    obj3.pakDept();

    return 0;
}