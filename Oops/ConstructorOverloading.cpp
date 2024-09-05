#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string subject;
    string dept;

    // NON Parameterise Constructor 
    Teacher()
    {
        dept = " Computer Science";
    }

    // Parameterised Constructor 
    // (int this Class Teacher this constrcutor is overloaded and this scenerio is called CONSTRCUTOR OVERLOADING in C++)
    
    Teacher(string n, string s, string d, double sal)
    {
        name = n;
        subject = s;
        dept = d;
        salary = sal;
    }

    void display()
    {
        cout << "Name :" << name << endl;
        cout << "subject :" << subject << endl;
        cout << "dept :" << dept << endl;
        cout << "salary :" << salary << endl;
    }
};

int main()
{
    Teacher t1("R A Sharma", "AI", "Computer Science", 25000);
    t1.display();
    return 0;
}
