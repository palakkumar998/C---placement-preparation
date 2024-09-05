#include <iostream>
#include <string>

using namespace std;

class Student
{

public:
    string name;
    string subject;

    Student()
    {
        cout << "Non parameterised constructor\n"
             << endl;
    }
    Student(string name, string subject)
    {
        cout << "Parameterised constructor" << endl;
        this->name = name;
        this->subject = subject;
    }

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Subject  : " << subject << endl;
    }
};

int main()
{

    Student st("Palak", "AI");

    printf("Polymorphism :\n");
    st.display();

    return 0;
}
