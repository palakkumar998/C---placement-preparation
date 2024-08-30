#include <iostream>
#include <string>

using namespace std;

// Multilevel Inheritance

// Grand Parent
class Person
{
public:
    string name;
    int age;
};

// parent class
class Student : public Person
{
public:
    int rollno;
};

// Child class
class GradStudent : public Student
{
public:
    string researchArea;

    void display()
    {

        cout << "Name :" << name << endl;
        cout << "age :" << age << endl;
        cout << "rollno :" << rollno << endl;
        cout << "research Area :" << researchArea << endl;
    }
};

int main()
{

    GradStudent s1;
    s1.name = "Tony Stark";
    s1.age = 35;
    s1.rollno = 123;
    s1.researchArea = "Artifical Intelligence & ML";

    printf("Multi-level inheritance:\n");
    s1.display();

    return 0;
}