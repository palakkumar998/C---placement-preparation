#include <iostream>
#include <string>

using namespace std;


// Abstraction
class Shape
{ // abstract class

    virtual void draw() = 0; // pure virtual function, now Shape is automatically abstract class, we can not make an object of abstract class, it just a blueprint of circle object/instance
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing of Circle\n";
    }
};


class Triangle : public Shape
{
};

int main()
{

    Circle c1;
    c1.draw();

    return 0;
}
