#include <iostream>
#include <string>

using namespace std;

class Account
{

private:
    double balance;
    string password; // data hiding 

public:
    string accountId;
    string accountHolderName;
};

int main()
{
    Account ac;
    ac.accountHolderName = "John doe";
    ac.accountId = "123jd";
    // Corrected output statement
    std::cout << "Public " << ac.accountHolderName << std::endl;
    return 0;
}
