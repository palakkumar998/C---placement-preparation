#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char a;

    float f = 65;
    for (a = 1; a < 10; a++)
    {
        f -=.1;
    }
    cout << f;

    return 0;
}
