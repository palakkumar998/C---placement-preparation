#include <iostream>
#include <string>

using namespace std;
//Compile time polymorphism
class Print
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }

    void show(char ch)
    {
        cout << "Char : " << ch << endl;
    }
};

int main()
{
    Print p1;
    p1.show(12);
    return 0;
}
