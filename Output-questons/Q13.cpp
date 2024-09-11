#include <iostream>
#include <string.h>
#define big(a, b) (a > b) ? a + 1 : b + 2

using namespace std;

int main()
{

    char w[] = "Exam";
    int I = strlen(w);

    for (int i = 0; i < I - 1; i++)
    {
        w[i] = big(w[i], w[i + 1]);
    }
    cout << w << endl;
    return 0;
}
