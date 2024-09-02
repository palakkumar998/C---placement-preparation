#include <iostream> 
using namespace std;


// call by value
void calculateArea(double radius)
{
    double area = 3.14 * radius * radius;
    cout << "Area : " << area << endl;
}

int main(int argc, char const *argv[])
{

    double radius = 5.0;
    calculateArea(radius);

    cout << "Radius of circle is : " << radius << endl;

    return 0;
}
