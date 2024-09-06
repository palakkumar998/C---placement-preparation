#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    struct item
    {
        /* data */
        int info;
        char iname[20];
        float rate;
    };

    cout << "size : " << sizeof(item);

    return 0;
}
