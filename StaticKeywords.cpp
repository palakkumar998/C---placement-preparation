#include <iostream>
#include <string>

using namespace std;

/*
void func()
{
   int x = 0;
   cout << "x : " << x << endl;
   x++;
}

int main()
{
   func();
   func();
   func();
   func();
   // output :
   // x : 0
   //  x : 0
   //  x : 0
   //  x : 0
   return 0;
}
*/

// with Static Variable
void func()
{
    static int x = 0; // it is initialised once for the life time of this program
    cout << "x : " << x << endl;
    x++;
}

class A
{
public:
    int x = 0;
    ;
    void incX()
    {
        x += 1;
    }
};
int main()
{
    // func(); // output - 0
    // func(); // output - 1
    // func(); // output - 2

    A obj;
    obj.x = 0;
    cout << obj.x << endl;

    obj.incX();
    cout << obj.x << endl;

    return 0;
}