#include <iostream>
using namespace std;

// call by ref
void swap(int &x, int &y)
{

    int temp = x;
    x = y;
    y = temp;
}

int main(int argc, char const *argv[])
{

    int a = 10;
    int b = 20;
    cout << "before :" << a << ","<< b << endl;
    swap(a, b);
    cout << "after :" << a << ","<< b << endl;
    return 0;
}
