#include <iostream>
#include <string>

using namespace std;

// Hierarchial Inheritance

// Parent
class Person
{
public:
    string name;
    int age;
};

// child 1
class Student : public Person
{
public:
    int rollno;
};

// child 2
class Teacher : public Person
{
public:
    string subject;
};

int main()
{
    Person p;
    Student s;
    Teacher t;
    p.name = "Palak";
    p.age = 24;
    s.rollno = 123;
    t.subject = "English";

    printf("Hierarchial inheritance:\n");

    cout << "Name :" << p.name << endl;
    cout << "age :" << p.age << endl;
    cout << "Rollno :" << s.rollno << endl;
    cout << "Subject :" << t.subject << endl;

    return 0;
}