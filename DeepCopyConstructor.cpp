#include <iostream>
#include <string>

using namespace std;

// DEEP copy constructor
class Student
{
public:
    // Member variables
    string name;
    double *cgpaPtr; // dynmaic memory allocation (IN HEAP)

    // Constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }

    // Method to display student details
    void display()
    {
        cout << "Name-> " << name << ", address-> " <<  &name << endl;
        cout << "CGPA-> " << *cgpaPtr << ", address-> " << &cgpaPtr << endl;
    }
};

int main()
{
    // Creating an instance of Student
    Student s1("Palak", 7.5);
    Student s2(s1); //Aman


    s1.display();
    *(s2.cgpaPtr) = 9.2;

    printf("\n");

    s2.name = "Aman";
    s2.display();

    return 0;
}