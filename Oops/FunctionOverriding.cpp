#include <iostream>
#include <string>

using namespace std;
// Run time polymorphism
class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class\n";
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class \n";
    }
};

int main()
{
    printf("Function Overriding in Runtime Polymorphism:\n");
    Parent p1;
    p1.getInfo(); // output : parent class (overriding the child class)

    Child c1;
    c1.getInfo(); // output : child class (overriding the parent class)

    return 0;
}
