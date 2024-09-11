#include <iostream>

using namespace std;
void display(int x, int y)
{
    int z;
    z = x;
    x = y;
    y = z;
}
int main(int argc, char const *argv[])
{

    int x, y;
    x = 37;
    y = 36;
    display(x, y);
    cout << x << " " << y;

    return 0;
}
