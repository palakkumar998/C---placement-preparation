#include <iostream>
#include <string>

using namespace std;

// Single Level Inheritance
// PARENT CLASS
// parent constructor will always called at First place
class Person
{
public:
    string name;
    int age;
    // constructor
    Person()
    {
        cout << "Parent constructor..." << endl;
    }

    // Destructor
    ~Person()
    {
        cout << "Parent Destructor❌" << endl;
    }
};

// derived class
// child constructor will always called at second place
class Student : public Person
{
public:
    int rollno;
    // constructor
    Student()
    {
        cout << "Child constructor...\n" << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "Child Destructor  ❌" << endl;
    }

    void display()
    {
        cout << "Name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "rollno :" << rollno << endl;
    }
};

int main()
{
    Student s;
    s.name = "Palak";
    s.age = 24;
    s.rollno = 158;

    s.display();

    return 0;
}