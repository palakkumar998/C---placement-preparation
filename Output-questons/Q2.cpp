#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    char c = 'T';
    switch (c)
    {

    case 'T':
        cout << "T";
    case 'E':
        cout << "E";
    case 'C':
        cout << "C";
    case 'H':
        cout << "H";
    default:
        cout << "tip";
    }

    return 0;
}
