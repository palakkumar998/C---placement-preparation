#include <iostream>

using namespace std;
int x = 7;

void showx();
void showxagain();



int main()
{
    showx();
    showx();
    showxagain();
}





void showx()
{
    int x = 34;
    cout << x++;
}




void showxagain()
{

    cout << x++;
}