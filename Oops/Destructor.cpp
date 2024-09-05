#include <iostream>
#include <string>

using namespace std;

// Destructor
class Student
{
public:
    string name;
    double *cgpaPtr; // dynmaic memory allocation (IN HEAP)

    // Constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // Destructor
    ~Student()
    {
        cout << "hi , i delete everything, i am a Destructor" << endl;
        delete cgpaPtr; // releasing memory , other wise it leads MEMORY LEAKS or it can not be used in other ways (memory waste)
    }

    // Method to display student details
    void display()
    {
        cout << "Name-> " << name << endl;
        cout << "CGPA-> " << *cgpaPtr << endl;
    }
};

int main()
{
    // Creating an instance of Student
    Student s1("Palak", 7.5);
    s1.display();

    return 0;
}