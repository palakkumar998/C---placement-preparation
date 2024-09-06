#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char x[] = {'s', 'a', NULL};

    cout << sizeof(x);
    return 0;
}
