#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int x = 1;
    int i = 2;

    do
    {
        x *= i;
    } while (++i < 5);
    cout << x;

    return 0;
}
