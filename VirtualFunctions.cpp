#include <iostream>
#include <string>

using namespace std;
// Runtime polymorphism
class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class\n";
    }
    void hello()
    {
        cout << "Hello from xyz" << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "child class \n";
    }

    void hello()
    {
        cout << "Hello from Child" << endl;
    }
};

int main()
{

    printf("Virtual Function in Runtime Polymorphism:\n");
    Parent p1;
    p1.hello();

    Child c1;
    c1.hello();

    return 0;
}
