#include <iostream>
#include <string>

using namespace std;

// Multiple Inheritance

// Parent 1
class FrontEnd
{
public:
    string ui;
};

// parent 2
class Backend
{
public:
    string language;
    string framework;
};

class Fullstack : public FrontEnd, public Backend
{
public:
    void display()
    {
        cout << "UI :" << ui << endl;
        cout << "Lang :" << language << endl;
        cout << "Framework :" << framework << endl;
    }
};

int main()
{
    Fullstack fs;
    fs.ui = "Material UI";
    fs.language = "JavaScript";
    fs.framework = "Nodejs, Expressjs";


    printf("Multiple inheritance:\n");
    fs.display();

    return 0;
}