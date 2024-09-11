#include <iostream>

using namespace std;
#define plus(x) x;
#define minus(x) --x + plus(x)

int main(int argc, char const *argv[])
{
    int x = 8, y;
    y = minus(x);
    cout << y;

    return 0;
}
 