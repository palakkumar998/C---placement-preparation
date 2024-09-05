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

    Teacher(string name, string subject, string dept, double salary)
    {
        // here is this is a special pointer that points to the current object (simpler version)
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;

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
    // t1.display();

    Teacher t2(t1); // default copy constructor invoke : basically create a copy of t1 object into t2 object
    t2.display();
    return 0;
}
