#include <iostream>


using namespace std;

int update(const int &x)
{
    x = 20;
    return x;
}
int main(int argc, char const *argv[])
{
    int a, b;
    a = 40;
    b = 50;
    a = update(b);
    cout << a;
   
    return 0;
}
