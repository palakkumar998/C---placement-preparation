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

    // Constrcutor with initailisation --> a simple function which has same name as class but it has no return type or it can take parameters also

    // NON Parameterise Constructor
    Teacher()
    {
        dept = " Computer Science";
    }
};

int main()
{
    // constructor call (it can be call multiple time with same constructor)
    Teacher t1;
    t1.name = " H. C. Verma";
    t1.subject = " Cloud Computing";

    // printing statement
    cout << "Teacher name :" << t1.name << endl;
    cout << "Teacher subject :" << t1.subject << endl;
    cout << "Teacher Dept :" << t1.dept << endl;

    return 0;
}
