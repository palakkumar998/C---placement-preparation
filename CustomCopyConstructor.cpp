#include <iostream>
#include <string>

using namespace std;

class Teacher
{
public:
    string name;
    string subject;
    string dept;
    double salary;

    // constructor with parameters
    Teacher(string name, string subject, string dept, double salary)
    {

        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }

    // custom copy constrcutor
    Teacher(Teacher &orgObject) // call by referene
    {
        cout << "i am custom copy constructor\n"
             << endl;
        this->name = orgObject.name;
        this->subject = orgObject.subject;
        this->dept = orgObject.dept;
        this->salary = orgObject.salary;
    }

    // print method
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
    Teacher t1("Palak", "WEB3", "Computer Science", 45000);

    Teacher t2(t1); // custom copy constrcutor
    t2.display();

    return 0;
}
