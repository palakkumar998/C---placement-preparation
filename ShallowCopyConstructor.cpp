#include <iostream>
#include <string>

using namespace std;


// shallow copy constructor 
class Student
{
public:
    // Member variables
    string name;
    double cgpa;

    // Constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &obj){
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    // Method to display student details
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    // Creating an instance of Student
    Student s1("Palak", 7.5);

    // Displaying student details
    s1.display();

    Student s2(s1);
    s2.display();

    return 0;
}